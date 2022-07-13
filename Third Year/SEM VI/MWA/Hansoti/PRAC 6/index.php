<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Registration Form</title>
    <style>
        body {
            background: rgb(73, 73, 73);
            text-align: center;
            color: white;
            font-size: 20px;
        }
    </style>
</head>
<body>
    <h1>Registration Successful!</h1>
<?php
    if($_GET["fname"]||$_GET["lname"]||$_GET["age"]||$_GET["city"]||$_GET["email"]) {
        echo "Name: ".$_GET['fname']." ".$_GET["lname"]."<br/>";
        echo "Email: ".$_GET['email']."<br/>";
        echo "Age: ".$_GET['age']."<br/>";
        echo "Hometown: ".$_GET['city']."<br/>";
        exit();
    }
?>
</body>
</html>