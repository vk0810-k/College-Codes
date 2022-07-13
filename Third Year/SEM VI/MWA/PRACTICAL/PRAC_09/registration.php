<!DOCTYPE html>
<html>
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Registration Success</title>
    <link href='https://fonts.googleapis.com/css?family=Ubuntu' rel='stylesheet'>
    <style type="text/css">
    h1 
    {
        text-align: center;
    }
    h2 
    {
        text-align: center;
    }
    *{
        margin: 0;
        padding: 0;
    }
    body
    {
        font-family: 'Ubuntu', sans-serif;
        background: #4288c8;
        display: flex;
        justify-content: center;
        align-items: center;
    }
    .container 
    {
        margin-top: 50px;
        width: 85%;
        background-color: #FFFFFF;
        padding: 20px;
        border-radius: 8px;
        margin-bottom: 50px;
    }
    </style>
</head>
<body>
    <div class="container">
    <?php
        print("<h1>Registration Sucessful</h1>");
        print("<br><h2>Welcome to the registered world!!!</h2>");
        if($_GET["age"]) {
            echo "<h3>Welcome user : </h3>".$_GET['fname']." ".$_GET['lname']." !!!<br/><br>";
            echo "<h3>You are ".$_GET['age']." year old.</h3><br/>";
            echo "<h3>Your Gender is :: </h3>".$_GET['gender']."<br/><br>";
            echo "<h3>Your cell number is :: </h3>".$_GET['Number']."<br/>";
            exit();
        }
    ?>
</div>
</body>
</html>