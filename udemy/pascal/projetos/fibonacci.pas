program fibonacci;
var 
    num_novo, num_atual, num_anterior, cont, i :Integer;
begin
  writeln ('informe até qual termo de fibonacci voce quer ver: ');
  read(cont);
  i := 1;
  num_anterior := 0;
  num_atual := 1;
  num_novo := 1;
  while (i<= cont) do
    begin
    writeln('o ', i, '° termo de fibonacci é: ', num_novo);
    num_novo := num_atual+num_anterior;
    num_anterior := num_atual;
    num_atual := num_novo; 
    i := i+1;
    end;
end.
