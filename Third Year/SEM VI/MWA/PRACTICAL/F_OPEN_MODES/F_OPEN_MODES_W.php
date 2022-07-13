<h1>Write to file W</h1>
<?php 
$myfile = fopen("file.txt", "w") or die("Unable to open file!");

$txt = "Varun\n";
fwrite($myfile, $txt);
$txt = "Khadayate\n";
fwrite($myfile, $txt);
fclose($myfile);
 ?>

