<?php 
$myfile = fopen("file.txt", "r") or die("Unable to open file!");
echo fread($myfile,filesize("file.txt")),"<br>";
echo filesize('file.txt');
fclose($myfile);
 ?>

<br><br>

<h1>Write to file W</h1>
<?php 
$myfile = fopen("file.txt", "w") or die("Unable to open file!");

$txt = "NMIMS\n";
fwrite($myfile, $txt);
$txt = "STME\n";
fwrite($myfile, $txt);
fclose($myfile);
 ?>

<h1>Read and write a file R+</h1>
<?php 
$myfile = fopen("file.txt", "r+") or die("Unable to open file!");
$txt = "Varun\n";
fwrite($myfile, $txt);
$txt = "Khadayate\n";
fwrite($myfile, $txt);
echo fread($myfile,filesize("file.txt")),"<br>";
echo filesize('file.txt');
fclose($myfile);
 ?>

<h1>Write only A</h1>
<?php 
$myfile = fopen("file.txt", "a") or die("Unable to open file!");
$txt = "\nVarun Khadayate\n16\nvarunkhadayate0810@gmail.com";
fwrite($myfile, $txt);
fclose($myfile);
 ?>

<h1>Read/Write A+</h1>
<?php 
$myfile = fopen("file.txt", "a") or die("Unable to open file!");
$txt = "\nVarun Khadayate\n16\nvarunkhadayate0810@gmail.com";
fwrite($myfile, $txt);
echo fread($myfile,filesize("file.txt")),"<br>";
fclose($myfile);
 ?>

<h1>open for writing only X</h1>
<?php 
$myfile = fopen("file.txt", "x") or die("Unable to open file!");
$txt = "\nVarun Mahendra Khadayate\n70362019028";
fwrite($myfile, $txt);
fclose($myfile);
?>

<h1>open for reading and writing X+</h1>
<?php 
$myfile = fopen("file.txt", "x") or die("Unable to open file!");
$txt = "\nVarun Mahendra Khadayate\n70362019028";
fwrite($myfile, $txt);
fclose($myfile);

$myfile = fopen("file.txt", "r") or die("Unable to open file!");
echo fread($myfile,filesize("file-x.txt"));
fclose($myfile);
?>