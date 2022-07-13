<?php
session_start();
?>

<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<?php 
	echo "Favorite color is ". $_SESSION['favcolor'] . ".<br>";
	echo "Favorite animal is ". $_SESSION['favanimal'] . ".";
	print_r($_SESSION);
	$_SESSION["favcolor"] = "yellow";
	print_r($_SESSION);
	session_unset();
	session_destroy();
	 ?>
</body>
</html>