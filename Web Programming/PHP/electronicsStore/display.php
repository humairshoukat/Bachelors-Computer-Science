<?php
include 'connect.php';
session_start();
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Database</title>
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css">

</head>
<body>

    <?php
    if(isset($_SESSION['message']))
    ?>
    <div class="alert alert-<?=$_SESSION['msg_type']?>">

    <?php
    echo ($_SESSION['message'] ?? null);
    unset($_SESSION['message']);
    ?>

    </div>
    

    <div class="container">
        <button class="btn btn-primary my-5"> <a href="record.php" class="text-light">Add New Store</a></button>
        <table class="table">
            <thead class="thead-dark">
                <tr>
                    <th scope="col">Sr#</th>
                    <th scope="col">Store Name</th>
                    <th scope="col">Store Type</th>
                    <th scope="col">Opening Time</th>
                    <th scope="col">Closing Time</th>
                    <th scope="col">Username</th>
                    <th scope="col">Password</th>
                </tr>
            </thead>
        <tbody>


        <?php

    $sql="SELECT * FROM storedata";
    $result=mysqli_query($con,$sql);
    if($result){
        while($row=mysqli_fetch_assoc($result)){
            $id=$row['sr#'];
            $storename=$row['storename'];
            $type=$row['type'];
            $live_open=$row['live_open'];
            $live_close=$row['live_close'];
            $username=$row['username'];
            $password=$row['password'];
            echo '<tr>
            <th scope="row">'.$id.'</th>
            <td>'.$storename.'</td>
            <td>'.$type.'</td>
            <td>'.$live_open.'</td>
            <td>'.$live_close.'</td>
            <td>'.$username.'</td>
            <td>'.$password.'</td>
            </tr>';
        }
    }



?>
           
        </tbody>
        </table>
    </div>
    
</body>
</html>