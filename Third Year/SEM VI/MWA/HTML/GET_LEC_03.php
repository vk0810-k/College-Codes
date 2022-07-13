<?php
	if($_GET["name"] || $_GET["age"])
	{
		echo "Welcome ".$_GET['name']."<br/>";
		echo "You are ".$GET['age']." years old.";
		exit();
	}
?>

<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<form action="<?_PHP_SELF ?" method = "GET">
		Name:<input type="text" name = "name"/>
		Age:<input type="text" name = "age"/>
	</form>
	<button type="submit" form="form1" value="Submit">Submit</button>
</body>
</html>