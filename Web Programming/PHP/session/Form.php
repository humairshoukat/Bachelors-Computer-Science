<!-- For PHP File info  -->
<?php
// phpinfo();

// session function
session_start();
if(isset($_SESSION['user']))
{
    header("location:data.php");
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <!-- action="data.php" -->
    <form method="post" action="<?php echo($_SERVER['PHP_SELF']);?>">
        <input type="text" placeholder="Enter Username" name="user" /><br>
        <input type="password" name="pass" placeholder="Enter Password" /><br>
        <input type="submit" name="sub" />
    </form>

    <!-- For getting data on the same page  -->
    <?php
    if(isset($_POST['sub']))
    { 
        $user=$_POST['user'];
        $pass=$_POST['pass'];
        if(($user=='abc')&&($pass=='123'))
        {
            echo('Successful Login');
            // $_SESSION['user']=1;
            header("location:data.php");
        }
        else
        {
            echo('Incorrect data');
        }
    }
    ?>
    
</body>
</html>

<!--
    $user=$_POST['user'];
    $email=$_POST['email'];
    $pass=$_POST['pass'];
-->

<!-- 
    if(isset($_POST['sub']))
    { 
        $user=$_POST['user'].'<br>';
        $email=$_POST['email'].'<br>';
        $pass=$_POST['pass'];
        if(($user=='abc')&&($pass=='123'))
        {
            echo('Successful Login');
        }
        else
        {
            echo('Incorrect data');
        }
    }
-->