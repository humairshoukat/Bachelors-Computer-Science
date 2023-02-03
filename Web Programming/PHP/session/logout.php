<?php
session_start();
echo "Logout Successfully";
session_destroy();  // function that destorys session
header("location: Form.php");
?>