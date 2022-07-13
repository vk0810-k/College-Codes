<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>LOGIN Form</title>
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
<?php
    $pwd = "A@rjav#01";
    $Name = "Aarjav";
    $Surname = "Hansoti";
    $roll_no = "A014";
    $email = "aarjav.hansoti01@gmail.com";
    if($pwd == $_GET["password"])
    {
        print("Name is: ".$Name." ".$Surname);
        print("<br>Rollno is: ".$roll_no);
        print("<br>Email: ".$email);
    } else {
        print("Password is incorrect");
    }
?>
</body>
</html>