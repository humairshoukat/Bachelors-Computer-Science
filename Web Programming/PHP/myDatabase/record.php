<?php

session_start();

include 'connect.php';

if(isset($_POST['submit'])){
    $name=$_POST['name'];
    $writer=$_POST['writer'];

    $sql=("INSERT INTO books(name, writer) values('$name', '$writer')");
    $result=mysqli_query($con,$sql);
    if($result){
        // echo "Data inserted successfully";

        $_SESSION['message']="Record has been saved!";
        $_SESSION['msg_type']="success";

        header('location:display.php');
    }
    else{
        die(mysqli_error($con));
    }
}

?>




<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css">

    <title>Database</title>
  </head>
  <body>
    <div class="container my-5">
    <form method="post">
        <div class="form-group">
        <label>Name</label>
        <input type="text" class="form-control" placeholder="Enter book name" name="name" autocomplete="off">
        </div>
        <div class="form-group">
        <label>Writer</label>
        <input type="text" class="form-control" placeholder="Enter writer name" name="writer" autocomplete="off">
        </div>
        <button type="submit" class="btn btn-primary" name="submit">Submit</button>
    </form>
    </div>
  </body>
</html>