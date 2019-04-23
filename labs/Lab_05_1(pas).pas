<<<<<<< HEAD
Program lab_05;
var array[]
=======
program lab_05;
var
  i, j, k: integer;
  arr: array [1..10] of integer;
begin
  WriteLn('Input array');
  for i := 1 to 10 do
  begin
    arr[i] := i;
    Write(arr[i], ' ');
  end;
  for j := 2 to 10 do
  begin
    if j < 8 THEN
    begin
      arr[j] := arr[j + 3];
    end ELSE
    begin
      if j >= 8 THEN begin
        arr[j] := 0;
      end;
    end;
    end;
    WriteLn();
    for k := 1 to 9 do
    begin
      Write(arr[k], ' ');
    end;
  WriteLn(0);
end.
>>>>>>> b44f5281de4c090b1eda470966e0afa7a9805e1f
