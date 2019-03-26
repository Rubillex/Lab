Program lab_03;
var number, out_number: real;
var k, out_x, z, n, x, i, temp, k: integer;
Begin



  z:= 32767;
  number:= 0;
  write('k=');
  readln(k);
  Write('n=');
  ReadLn(n);
  for i := 0 to k-1 do begin
    number:= number + 1;
    Write('x=');
    ReadLn(x);
    temp:= x - z;
    if (abs(temp) < z) then begin
      z:= abs(x-n);
      out_number:= number;
      out_x:= x;
    end;
  end;
    WriteLn('serial number=', out_number);
    WriteLn('value of number=', out_x);
readln;
end.
