<h1>Read and write a file R+</h1>
<?php 
$myfile = fopen("file.txt", "r+") or die("Unable to open file!");
$txt = "Varun\n";
fwrite($myfile, $txt);
$txt = "Khadayate\n";
fwrite($myfile, $txt);
$txt = "70362019028\n";
fwrite($myfile, $txt);
fclose($myfile);
echo fread($myfile,filesize("file.txt")),"<br>";
fclose($myfile);
 ?>

