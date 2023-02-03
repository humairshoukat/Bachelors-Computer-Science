<?php session_start(); ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Main</title>
</head>
<body>
    <a href="main.php">Main</a>
    <a href="internal.php">Internal</a>
    <a href="internal2.php">Internal2</a>
    <form action="<?php echo($_SERVER['PHP_SELF'])?>" method="get">
        <select name="color" id="">
            <option value="0">dark</option>
            <option value="1">Light</option>
        </select>
        <input type="submit" name="sub">
    </form>
    
    <?php
    if(isset($_GET['sub']))
    {
        $CHOICE=$_GET['color'];
        if($CHOICE=='1')
        {
            $_SESSION['col']="light";
        }
        else
        {
            $_SESSION['col']="dark";
        }
    }
    ?>
</body>
</html>