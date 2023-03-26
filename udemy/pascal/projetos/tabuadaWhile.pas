program tabuadaWhile;
var num, i:Integer;
begin
  writeln ('insira um numero para imprimir a tabuada: ');
  read(num);
  i := 1;
  while (i<=10) do
    begin
    writeln(num,'x',i, ' = ', (num*i));
    i := i + 1;
    end;
end.
