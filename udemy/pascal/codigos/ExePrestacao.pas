program prestacao;
var 
    temp : integer;
    taxa, valor : real;
begin
writeln('informe o valor da prestacao: ');
read(valor);
writeln('informe a taxa: ');
read(taxa);
writeln('informe os dias de atraso: ');
read(temp);
valor := valor + (valor*taxa/100)*temp;
writeln('o valor que voce tera quem pagar eh: ', valor:6:2);
readln();
end.
