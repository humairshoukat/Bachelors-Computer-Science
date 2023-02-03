<?php

session_start();

include 'connect.php';
if(isset($_POST['submit'])){
    $storename=$_POST['storename'];
    $type=$_POST['type'];
    $live_open=$_POST['live_open'];
    $live_close=$_POST['live_close'];
    $username=$_POST['username'];
    $password=$_POST['password'];

    $sql=("INSERT INTO storedata(storename, type, live_open, live_close, username, password) values('$storename', '$type', '$live_open', '$live_close', '$username', '$password')");
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

    <title>Electronics Store</title>
  </head>
  <body>
    <div class="container my-5">
    <form method="post">
        <div class="form-group">
        <label>Store Name</label>
        <input type="text" class="form-control" placeholder="Enter store name" name="storename" autocomplete="off">
        </div>
        <div class="form-group">
        <label>Type</label>
        <input type="text" class="form-control" placeholder="Enter store type name" name="type" autocomplete="off">
        </div>
        <div class="form-group">
        <label>Live_Open</label>
        <input type="time" class="form-control" placeholder="Enter opening time" name="live_open" autocomplete="off">
        </div>
        <div class="form-group">
        <label>Live_close</label>
        <input type="time" class="form-control" placeholder="Enter closing time" name="live_close" autocomplete="off">
        </div>
        <div class="form-group">
        <label>Username</label>
        <input type="text" class="form-control" placeholder="Enter username" name="username" autocomplete="off">
        </div>
        <div class="form-group">
        <label>Password</label>
        <input type="password" class="form-control" placeholder="Enter password" name="password" autocomplete="off">
        </div>
        
    
 
  <button type="submit" class="btn btn-primary" name="submit">Submit</button>
</form>
    </div>
  </body>
</html>