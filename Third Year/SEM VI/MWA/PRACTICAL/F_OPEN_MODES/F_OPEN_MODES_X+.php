<h1>open for reading and writing X+</h1>
<?php 
$myfile = fopen("file.txt", "x+") or die("Unable to open file!");
$txt = "\nVarun Mahendra Khadayate\n70362019028";
fwrite($myfile, $txt);
fclose($myfile);

$myfile = fopen("file.txt", "r") or die("Unable to open file!");
echo fread($myfile,filesize("file-x.txt"));
fclose($myfile);
?>