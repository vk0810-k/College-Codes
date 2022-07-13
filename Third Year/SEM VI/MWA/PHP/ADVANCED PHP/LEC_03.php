<!-- <?php
$cookie_name = "NMIMS";
$cookie_value = "STME";
setcookie($cookie_name, $cookie_value, time() + (86400 * 30), "/");
?>

<html>
<body>

<?php
if(!isset($_COOKIE[$cookie_name])) 
{
  echo "Cookie named '" . $cookie_name . "' is not set!";
} 
else 
{
  echo "Cookie '" . $cookie_name . "' is set!<br>";
  echo "Value is: " . $_COOKIE[$cookie_name];
}
?>

</body>
</html> 

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
	$_SESSION["favcolor"] = "green";
	$_SESSION["favanimal"] = "cat";
	echo "Session Variable are set";
	?>
</body>
</html> -->

