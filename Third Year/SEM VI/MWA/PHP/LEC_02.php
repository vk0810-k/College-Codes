<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<?php 
	$Today = date("l F d, Y");
	print("Today is $Today");
	$Today = date("L")
	if($Today == 1)
		print("<br> This is a leap year!");
	else
		print("<br> This is not a leap year!");
	 ?>
</body>
</html>