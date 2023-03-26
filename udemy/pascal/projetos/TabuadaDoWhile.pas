program TabuadaDoWhile;
var
    num, i: Integer;
begin
  writeln ('informe um numoero para imprimir a tabuada: ');
  read(num);
  i := 1;
  repeat
  begin
    writeln(num, 'x',i, ' = ', num*i);
    i := i+1;
    end;
    until(i>10);
end.
