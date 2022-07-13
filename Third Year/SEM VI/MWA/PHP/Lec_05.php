<!-- <!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<title></title>
</head>
<body>
	<?php 
	$name = $email = $gender = $comment = $website = "";
	if($_SERVER['REQUEST_METHOD'] == "POST")
	{
		$name = test_input($_POST['name']);
		$email = test_input($_POST['email']);
		$website = test_input($_POST['website']);
		$comment = test_input($_POST['comment']);
		$gender = test_input($_POST['gender']);

	}
	function test_input($data)
	{
		$data = trim($data);
		$data = stripslashes($data);
		$data = htmlspecialchars($data);
		return $data;
	}
	 ?>
	<h2>PHP validation example</h2>
	<form method="post" action="<?php echo htmlspecialchars($_SERVER['PHP_SELF']);?>">
		Name:<input type="text" name="name">
		E-Mail:<input type="text" name="E-Mail">
		Website:<input type="text" name="website">
		Comment:<textarea name="comment" rows="5" cols="40"></textarea>
		Gender
		<input type="radio" name="gender" value="female">Female
		<input type="radio" name="gender" value="female">Male
		<input type="radio" name="gender" value="female">Other
		<input type="submit" name="Submit">
	</form>
	<?php 
	echo "<h2>Your Input:</h2>";
	echo "$name";	
	echo "<br>";
	echo "$email";
	echo "<br>";
	echo "$website";
	echo "<br>";
	echo "$comment";	
	echo "<br>";
	echo "$gender";	
	echo "<br>";
	 ?>
</body>
</html> -->

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PHP Session 5</title>
</head>
<body>
    <?php
    for($i=0; $i<=5; $i++) {
        if($i == 2) {
            continue;
        }
        print("$i<br>");
        if($i == 4) {
            break;
        }
    }
    ?>
</body>
</html>