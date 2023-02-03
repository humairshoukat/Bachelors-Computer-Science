<?php

$con=new mysqli('localhost','root','','electronicsStore');

// To check our database is connect or not
/*if($con){
    echo "Connection Successfull";
}
else{
    die(mysqli_error($con));
}*/

if(!$con){
    die(mysqli_error($con));
}

?>