<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Data Page</title>
</head>
<body>
    <?php
    /* if(!isset($_SESSION['user'])) //If session is not set then redirect to login page
    {
        header("location:Form.php");
    }
    echo $_SESSION['user'];
    echo "Login Success";*/
    echo("<a href='logout.php'>logout</a>");
    // echo($_POST['user']).'<br>';
    // echo($_POST['email']).'<br>';
    // echo($_POST['pass']);
    ?>
    
</body>
</html>