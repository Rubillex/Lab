Program lab_03;
var sum, Eps, x, temp, factorial: real;
var z, i, k, t: integer;
Begin
sum:=0;
k:=0;
Write('x=');
ReadLn(x);
Write('Eps=');
ReadLn(Eps);
REPEAT
      BEGIN
      k:=k+1;
      for i := 1 to k+2 do begin
      factorial:= factorial * i;
      end;
      t:= (k+2) mod 2;
      if (t=0) then
      begin
      z:= 1;
      end
      else
      begin
      z:= -1;
      end;
      temp:= z * (x+2) / factorial;
      sum:= sum + temp;
      END;
UNTIL (abs(temp)<Eps);
Write('sum=', sum);
end.
