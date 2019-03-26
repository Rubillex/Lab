Program lab_02;
var x, y: real;
Begin
  readln(x);
  if x < 0 then
    begin
      y := abs(x);
    end
    else if (x >= 0) and (x < 1) then
    begin
      y := x;
      end
      else if (x >= 1) and (x < 2) then
    begin
    y := 1;
    end
    else if x >= 2 then
    begin
    y := -2*x+5;
    end;
    writeln(y);
readln;
end.
