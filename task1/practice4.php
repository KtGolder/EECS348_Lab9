<form name="form" action="" method="post">
<body> Multiplication Table size:</body>
  <input type="text" name='subject' id="size" value="">
</form>
<table border=$POST["subject"]>
<?php
$size = $_POST['subject'];
for ($i = 1; $i < $size+1; $i++) {
        echo "<tr>";
        for ($j = 1; $j < $size+1; $j++){
                $ans = $i * $j;
                echo "<td> $ans</td>";
        }
        echo"</tr>";
}
?>
</table>
