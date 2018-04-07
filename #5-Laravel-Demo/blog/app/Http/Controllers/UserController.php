<?php
namespace App\Http\Controllers;

use Illuminate\Support\Facades\Cache;

class UserController extends Controller
{
    public function index()
    {
        $value = Cache::getFacadeRoot();
    }
}
