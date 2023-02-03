<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Database</title>
</head>
<body>
    
<?php
$conn=new mysqli("localhost", "root", "", "books");

/*if($conn->connect_error)
{
    echo("connection error");
}
else{
    echo("Sucessful");
}*/


i/*f($conn->query("CREATE DATABASE books")===TRUE)
{
    echo("DB Created");
}
else{
    echo("error creating DB");
}*/


/*if($conn->query("CREATE TABLE data(id INT(6) AUTO_INCREMENT PRIMARY KEY, Name VARCHAR(100))")===TRUE)
{
    echo("Table Created");
}
else{
    echo("error creating Table");
}*/


/*if($conn->query("INSERT INTO data(Name) VALUES ('Kala Chand')")===TRUE)
{
    echo("Data inserted");
}
else{
    echo("Data not inserted");
}*/

echo('<table border="1">');
$result=$conn->query("SELECT * FROM data");
// this only fetch first row of data
while($row=$result->fetch_assoc())
{
    echo("<tr><td>".$row['id']."</td><td>".$row['Name']."</td></tr>");
}
echo("</table>");
?>
</body>
</html>
