<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>AJAX</title>
    <script>
        function display(){
            var request=new XMLHttpRequest();
            request.open("GET","greeting.php");
            request.onreadystatechange= function(){
                if((this.readyState===4)&&(this.status===200))
                {
                    document.getElementById('para').innerHTML=this.responseText;
                }
            };
            request.send();
        }
    </script>
</head>
<body>
    <p id="para">This will get replaced through AJAX</p>
    <button onclick="display()">Update Data</button>
</body>
</html>