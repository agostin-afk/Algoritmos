program operacoes_funcoes;
var
    num1, num2, mult, divi, soma, sub :real;
procedure leitura;
begin
    write('informe o primeiro numero: ');
    read(num1);
    write('informe o segundo numero: ');
    read(num2);
end;
procedure calculos;
begin
    soma := num1 + num2;
    mult := num1*num2;
    divi := num1/num2;
    sub := num1 - num2;
end;
procedure imprimir;
begin
    writeln('A somda dos numeros deu: ', soma:6:2);
    writeln('A subtração dos numeros deu: ', sub:6:2);
    writeln('A multuplicação dos numeros deu: ', mult:6:2);
    writeln('A divisão dos numeros deu: ', divi:6:2);
end;
begin
    leitura;
    calculos;
    imprimir;
end.