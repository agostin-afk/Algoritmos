program operacoes_mat;
var num1, num2, soma, mult, divisao, sub : real;
begin
     write('digite um numero: ');
     readln(num1);
     write('digite um outro numero: ');
     readln(num2);
     soma := num1+num2;
     divisao:= num1/num2;
     mult := num1*num2;
     sub := num1-num2;
     writeln('A soma de ',num1:6:2,' e ',num2:6:2,' eh: ',soma:6:2);
     writeln('A multiplicacao de ',num1:6:2, ' e ',num2:6:2,' eh: ',mult:6:2);
     writeln('A subtracao de ',num1:6:2,' e ',num2:6:2,' eh: ', sub:6:2);
     writeln('A divisao de ',num1:6:2, ' e ', num2:6:2,' eh: ',divisao:6:2);
     writeln('------------final do sistema------------');
     readln();
end.
