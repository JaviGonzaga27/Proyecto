<?php
$Nombre = $_POST['nombre'];
$Cedula = $_POST['cedula'];
$estadocivil = $_POST['estadocivil'];
$fnacimiento = $_POST['fnac'];
$tipoempleado = $_POST['tipoempleado'];
$correo = $_POST['email'];
$Sueldo = $_POST['sueldo'];

echo('<table width="100%" height="300" border="1">');
	echo('<tr>');
		echo('<th>'); echo("Nombre"); echo('</th>');
		echo('<th>'); echo("Cedula"); echo('</th>');
		echo('<th>'); echo("Fecha de nacimiento"); echo('</th>');
		echo('<th>'); echo("Estado Civil"); echo('</th>');
		echo('<th>'); echo("Tipo de Empleado"); echo('</th>');
		echo('<th>'); echo("Correo electronico"); echo('</th>');
		echo('<th>'); echo("Sueldo"); echo('</th>');
	echo('</tr>');

	echo('<tr>');
		echo('<td align="center">'); echo("".$Nombre); echo('</td>');
		echo('<td align="center">'); echo("".$Cedula); echo('</td>');
		echo('<td align="center">'); echo("".$fnacimiento); echo('</td>');
		echo('<td align="center">'); echo("".$estadocivil); echo('</td>');
		echo('<td align="center">'); echo("".$tipoempleado); echo('</td>');
		echo('<td align="center">'); echo("".$correo); echo('</td>');
		echo('<td align="center">'); echo("".$Sueldo); echo('</td>');
	echo('</tr>');
echo('</table>');

?>