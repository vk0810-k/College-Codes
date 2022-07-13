<h1>Write only A</h1>
<?php 
$myfile = fopen("file.txt", "a") or die("Unable to open file!");
$txt = "\nVarun Khadayate\n16\nvarunkhadayate0810@gmail.com";
fwrite($myfile, $txt);
fclose($myfile);
 ?>
