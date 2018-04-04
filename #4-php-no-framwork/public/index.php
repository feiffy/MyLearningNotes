<?php
declare(strict_types = 1);

use DI\ContainerBuilder;
use function DI\get;
use ExampleApp\HelloWorld;
use function DI\create;
use FastRoute\RouteCollector;
use Middlewares\FastRoute;
use Middlewares\RequestHandler;
use Relay\Relay;
use Zend\Diactoros\Response;
use Zend\Diactoros\Response\SapiEmitter;
use Zend\Diactoros\ServerRequestFactory;

require_once dirname(__DIR__) . '/vendor/autoload.php';

$containerBuilder = new ContainerBuilder();
$containerBuilder->useAutowiring(false);
$containerBuilder->useAnnotations(false);
$containerBuilder->addDefinitions([
    HelloWorld::class => create(HelloWorld::class)->constructor(get('Foo'), get('Response')),
    'Foo'             => 'bar',
    'Response'        => function () {
        return new Response();
    },
]);

$container = $containerBuilder->build();

$routes = \FastRoute\simpleDispatcher(function (RouteCollector $r) {
    $r->get('/hello', HelloWorld::class);
});

$middlewareQueue[] = new FastRoute($routes);
$middlewareQueue[] = new RequestHandler($container);

$requestHandler = new Relay($middlewareQueue);
$response       = $requestHandler->handle(ServerRequestFactory::fromGlobals());

$emitter = new SapiEmitter();
$emitter->emit($response);