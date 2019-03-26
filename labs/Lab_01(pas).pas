Program lab_01;
var A, D, num, result: integer;
Begin
Readln(num);
D:= num mod 10;
A:= num div 1000;
result:= A + D;
Writeln(result);
end.
