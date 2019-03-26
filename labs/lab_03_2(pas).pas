Program lab_03;
var sum, xi, yi: real;
var x1, y1, n, k, i: integer;
Begin



  k:=1;
  x1:=1;
  y1:=1;
  sum:=0;
  xi:=x1;
  yi:=y1;
  Write('n=');
  ReadLn(n);
  for i := 0 to n-1 do begin
    if (k>1) then
    begin
       yi:= xi + yi;
       xi:= 0.3 * xi;
       sum:= sum + xi/(1+abs(yi));
    end else
      begin
       sum:= sum + xi/(1+abs(yi));
       k:= k+1;
       end;
  end;
  WriteLn('sum=', sum);
end.
