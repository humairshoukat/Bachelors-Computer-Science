<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method="get" action="<?php $_SERVER['PHP_SELF'] ?>">
    <input type="text" name="bookname">
    <input type="submit" name="sub">         
    </form>
    <?php
    $conn=new mysqli("localhost", "root", "", "books");
    $bkn=$_GET['bookname'];
    if($conn->query("INSERT INTO data(Name) VALUES ($bkn)")===TRUE)
    {
        // echo("Data inserted");
    }
    else{
        // echo("Data not inserted");
    }
    ?>
    <!-- <?php echo("path");?> -->
</body>
</html>