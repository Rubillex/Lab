Program lab_01_1;
var a, x, y, z, temp_x, temp_y, temp_z, temp1_y, temp1_z, temp2_z, temp3_z: integer;
Begin
Readln(a);

temp_x:= a*a; //2
x:= temp_x*temp_x; //4



temp_y:= a*a; //2
temp1_y:= temp_y*temp_y; //4
y:= temp_y*temp1_y; //6


temp_z:= a*a;  //2
temp1_z:= temp_z*a; //3
temp2_z:= temp1_z*temp1_z; //6
temp3_z:= temp2_z*temp2_z; //12
z:= temp3_z*temp1_z; //15

Writeln(x);
Writeln(y);
Writeln(z);
readln;
end.
