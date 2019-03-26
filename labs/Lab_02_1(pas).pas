Program lab_02;
var x, num: real;
Begin
  readln(num);
  if num >= 0 then
    begin
      x := (-1 * abs(num-1)) / (2 * num);
    end
    else
    begin
      x := ln(1 + (num * num));
      end;
    writeln(x);
readln;
end.
