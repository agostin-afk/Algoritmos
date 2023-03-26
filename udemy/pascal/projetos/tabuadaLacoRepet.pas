program tabuadaLacoRepet;
var num, i: Integer;
begin
    writeln ('Informe um numero para imprimir a a tabuada deste: ');
    read(num);
    for i := 1 to 10 do
        writeln(num,'x',i,' = ',i*num);
end.
