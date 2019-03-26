Program lab_03;
var n, i, x1, y1: integer;
var sum, xi, yi: real;
Begin
  x1:=1;
  y1:=1;
  xi:=x1;
  yi:=y1;
  write('n=');
  readln(n);
  for i := 0 to n-1 do begin
    yi:= xi+ yi;
    xi:= 0.3 * xi;
    sum:= xi/(1+abs(yi));
  end;
    WriteLn('sum=', sum);
readln;
end.
