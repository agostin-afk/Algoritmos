program funcoes_return;
var 
    num1, num2, soma, mult, sub, divi:real;
procedure leitura;
begin
    write('informe o valor do primeiro numero: ');
    read(num1);
    write('informe o valor do segundo numero: ');
    read(num2);
end;
function somar(p1, p2 :real) : real;
begin
    soma := p1+p2;
    somar := soma;{ esse é o return do pascal, seria: o "valor" da funcao recebe-rá a variavel respectiva}
end;
function multiplica(p1 ,p2 :real) : real;
begin
    mult := p1*p2;
    multiplica := mult;
end;
function subtrair(p1, p2 : real) : real;
begin
    sub := p1-p2;
    subtrair := sub;
end;
function dividir(p1, p2 :real) : real;
begin
    divi := p1/p2;
    dividir := divi;
end;
begin
    leitura;
    writeln('A soma dos numeros deu: ',somar(num1, num2):6:2);
    writeln('A subtração dos numeros deu: ', subtrair(num1, num2):6:2);
    writeln('A multiplicacao dos numeros deu: ', multiplica(num1, num2):6:2);
    writeln('A divisao dos numeros deu: ', dividir(num1, num2):6:2);
end.
