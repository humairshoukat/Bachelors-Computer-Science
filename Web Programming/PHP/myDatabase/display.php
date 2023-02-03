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
        <button class="btn btn-primary my-5"> <a href="record.php" class="text-light">Add Data</a></button>
        <table class="table">
            <thead class="thead-dark">
                <tr>
                    <th scope="col">S#</th>
                    <th scope="col">Book Name</th>
                    <th scope="col">Writer</th>
                    <th scope="col">Operations</th>
                </tr>
            </thead>
        <tbody>

    <?php
    $sql="SELECT * FROM books";
    $result=mysqli_query($con,$sql);
    if($result){
        while($row=mysqli_fetch_assoc($result)){
            $id=$row['id'];
            $name=$row['name'];
            $writer=$row['writer'];
            echo '<tr>
            <th scope="row">'.$id.'</th>
            <td>'.$name.'</td>
            <td>'.$writer.'</td>
            <td>
            <button class="btn btn-primary"><a href="edit.php? editid='.$id.'" class="text-light">Edit</a></button>
            <button class="btn btn-danger"><a href="delete.php? deleteid='.$id.'" class="text-light">Delete</a></button>
            </td> 
            </tr>';
        }
    }
    ?>
           
        </tbody>
        </table>
    </div>
    
</body>
</html>