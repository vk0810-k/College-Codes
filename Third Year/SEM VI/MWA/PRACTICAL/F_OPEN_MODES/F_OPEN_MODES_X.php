<h1>open for writing only X</h1>
<?php 
$myfile = fopen("file.txt", "x") or die("Unable to open file!");
$txt = "\nVarun Mahendra Khadayate\n70362019028";
fwrite($myfile, $txt);
fclose($myfile);
?>
