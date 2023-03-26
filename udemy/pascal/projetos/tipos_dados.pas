program tipos_dados;
var
     salario:real;
     idade:integer;
     nome:String[30];
begin
     //nome := 'Agostinho';
     //idade:= 18;
     //salario:= 2000;
     write('Digite o seu nome: ');
     readln(nome);
     write('Digite o seu salario: ');
     readln(salario);
     write('Digite a sua idade: ');
     readln(idade);



     writeln('Seu nome: ', nome);
     writeln('Sua idade: ', idade);
     writeln('Seu salario: ', salario);
     writeln('----------------fim----------------');
     readln();
end.
