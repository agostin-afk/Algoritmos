program salario;
var salario_bruto, salario_liqui, inss:real;
nome:string;
begin writeln ('informe o seu nome: ');
read (nome);
writeln ('informe o seu salario bruto: ');
read (salario_bruto);
inss:= (salario_bruto * 9) / 100;
salario_liqui:= salario_bruto - inss;
writeln ('OlC! ', nome);
writeln ('seu salario bruto eh: ', salario_bruto: 6: 2, ' seu salario_liqui eh: ', salario_liqui: 6: 2, ' o valor do INSS eh: ', inss: 6:2) end.
