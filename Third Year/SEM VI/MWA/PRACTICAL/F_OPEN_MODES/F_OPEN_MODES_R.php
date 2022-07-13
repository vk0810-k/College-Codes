<h1>Read File R</h1>
<?php 
$myfile = fopen("file.txt", "r") or die("Unable to open file!");
echo fread($myfile,filesize("file.txt")),"<br>";
fclose($myfile);
 ?>

<br><br>