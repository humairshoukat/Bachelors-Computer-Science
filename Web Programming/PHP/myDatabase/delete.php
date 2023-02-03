<?php

session_start();

include 'connect.php';

if(isset($_GET['deleteid'])){
    $id=$_GET['deleteid'];

    $sql="DELETE FROM books where id=$id";
    $result=mysqli_query($con,$sql);
    if($result){
        // echo "Deleted Successfully";

        $_SESSION['message']="Record has been deleted!";
        $_SESSION['msg_type']="danger";
        
        header('location:display.php');
    }
    else{
        die(mysqli_error($con));
    }
}


?>