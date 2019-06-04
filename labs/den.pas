
Program lab_05;
var array[]
var
  i, j, current: integer;
  arr: array [1..20] of integer;
begin
  WriteLn('Input array');
  for i := 1 to 20 do
  begin
    Readln(arr[i]);
    Write(arr[i], ' ');
  end;
  size := 0;
  for j := 0 to 20 do
  begin
    if arr[j] >= arr[j+1] THEN
    begin
      current := arr[j];
    end ELSE
      begin
      WriteLn('The array isn't decreasing');
      exit;
      end;
    end;
    end;
    WriteLn('The array is decreasing');
  WriteLn(0);
end.
