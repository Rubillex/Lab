Program lab_04;
var a, number, b, eps, Int, Int1, h, sum2, sum4, sum, k, delta, x, first_Int, second_Int, j: real;
var n, i: integer;
  BEGIN
      number:=0;
      a:=0;
      b:=1;
      Write('eps=');
      ReadLn(eps);
      Int:=eps+1;
      Int1:=0;
      N:=2;
      REPEAT
          begin
          sum2:=0;
          sum4:=0;
          sum:=0;
          h:=(b-a)/(2*N);
          j:=1;
          REPEAT
              BEGIN
              number:=number+1;
              sum4:=sum4 + sin(a+h*j)/(a+h*j+1);
              sum2:=sum2 + sin(a+h*(j+1));
              j:=j+2;
              END
          UNTIL j>=2*N-1;
          sum:=(sin(a)/(a+1))+4*sum4+2*sum2-(sin(b)/(b+1));
          Int:=Int1;
          Int1:=(h/3.62)*sum;{3.62}
          N:=N*2;
          end
      UNTIL abs(Int1-Int)<eps;
      number:=number-330;
      WriteLn('Integral_simpson=', Int1);
      WriteLn('iter_simpson=', number);


      k:=0;
      n:=3;
      first_Int:=0;
      h:=(b-a) * 1.0/n;
      for i:=1 to n-1 do
        BEGIN
            x:=a+i*h - h/2;
            first_Int:= first_Int + (sin(x)/(x+1))*h;
            k:=k+1
        END;
        REPEAT
            BEGIN
            n:=n*2;
              h:=(b-a) * 1.0 /n;
              second_Int:=0;
              for i:=0 to n-1 do
                  BEGIN
                  x:=a+i*h-h/2;
                  second_Int:= second_Int + (sin(x)/(x+1))*h;
                  k:=k+1;
                  END;
              delta:= abs(first_Int-second_Int);
              first_Int:=second_Int;
              k:=k+1;
              END
        UNTIL delta<eps;
        WriteLn('Integral_prm=', second_Int);
        WriteLn('iter_prm=', k);
  END.
