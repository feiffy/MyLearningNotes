<?php
$numberPlusOne = array_map(function($number){
    return $number + 1;
}, [1,2,3]);

print_r($numberPlusOne);


function incrementNumber($number) {
    return $number + 1;
}

$numberPlusOne2 = array_map('incrementNumber', [1,2,3]);
print_r($numberPlusOne2);