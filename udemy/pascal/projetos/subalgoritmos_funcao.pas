program subalgoritmos_funcao;
var
    num1, num2, soma, mult, divi, sub: real;
procedure leitura;
    begin
        write('Informe o primeiro numero: ');
        read(num1);
        write('Informe o segundo numero: ');
        read(num2);
    end;
procedure calculos(p1,p2 :real);
    begin
        mult :=  p1 * p2;
        soma := p1 + p2;
        sub := p1-p2;
        divi := p1/p2;
    end;
procedure imprimir(mult, soma, sub, divi: real);
    begin
        writeln('A soma dos numeros deu: ', soma:6:2);
        writeln('A subtracao dos numeros deu: ', sub:6:2);
        writeln('A multiplicacao dos numeros deu: ', mult:6:2);
        writeln('A divisao dos numeros deu: ', divi:6:2);
    end;
begin
    leitura;
    calculos(num1,num2);
    imprimir(mult, soma, sub, divi);
end.
