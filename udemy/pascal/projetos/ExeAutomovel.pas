program ExeAutomovel;
var
   imposto, custofab, revender,custofinal: real;
begin
     write('informe o custo bruto do carro: ');
     readln(custofab);
     imposto := (45*custofab)/100;
     revender := (25* custofab)/100;
     custofinal := custofab + imposto + revender;
     writeln('O custo final do carro eh de: ', custofinal:6:2);
     readln();
end.
