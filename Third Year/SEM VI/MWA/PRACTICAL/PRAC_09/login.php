<!DOCTYPE html>
<html>
<head>
    <script src="jquery.js"></script>
    <script>
        $(document).ready(function(){
  $("#hide").click(function(){
    $("h4").hide();
  });
  $("#show").click(function(){
    $("h4").show();
  });
});
    </script>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <title>Login Success</title>
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
    $pwd = "Varun@0810";
    $Name = "Varun";
    $Surname = "Khadayate";
    $cell_no = "9930727285";
    $email = "varunkhadayate0810@gmail.com";
    if($pwd == $_GET["password"])
    {
        print("<h1>Login Sucessful</h1>");
        print("<br><h2>Hello User!!!</h2>");
        print("<br><h2>Here are your Details</h2>");
        print("<br><h3> Name :: </h3><h4>".$Name." ".$Surname."</h4>");
        print("<br>");
        print("<br><h3> Cell Number :: </h3><h4>".$cell_no."</h4>");
        print("<br>");
        print("<br><h3> Email Address :: </h3><h4>".$email."</h4>");   
    }
    else 
    {
        print("Password is incorrect");
    
    }
    ?>
    <br>
    <br>
    <button type="show/hide" id="hide">Hide your Data</button>
    <button type="show/hide" id="show">Show your Data</button>
    </div>
</body>
</html>