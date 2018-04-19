<?php

function enclosePerson($name) {
    return function($doCommand) use ($name) {
        return sprintf('%s, %s', $name, $doCommand);
    };
}

$clay = enclosePerson('Clay');

echo $clay('get me sweet tea!');