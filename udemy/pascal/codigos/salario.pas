program salario;
var 
bonus, fixo, total, vendas:real;
begin 
write('informe o qtd de vendas: ');
read(vendas);
fixo := 500;
bonus := vendas*50;
total := fixo + bonus;
writeln('com um numero de vendas de: ',vendas:6:2,' seu bonus eh de: ',bonus:6:2,' e o seu salario esse mes eh de: ', total:6:2);
read();
end.