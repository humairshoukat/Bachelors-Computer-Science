<?php session_start(); ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <a href="main.php">Main</a>
    <a href="internal.php">Internal</a>
    <a href="internal2.php">Internal2</a>
    <h1>Internal2</h1>
    <p>f.mv.lsm,vm/,ldm .smf,lmnsfk nd nlsn dfnvnlmn , 
        snam,ckjsdcnasdjkn,as.djc;klanxmasdcknxcnlnsdkn
        kajsdcnlmkasdn, naksdnjksndcnsd,nncmsdncn,xml_
        sd,nmc,ksjndc sdjahncjksd sdjckmsndkcjm.zx<>m zkl
    </p>
    <?php
    if($_SESSION['col']=="dark")
    {
        echo("<style> body{ background-color: black; color:white;} </style>");
    }
    ?>
</body>
</html>