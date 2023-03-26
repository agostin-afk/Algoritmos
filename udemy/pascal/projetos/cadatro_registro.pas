program cadatro_registro;
type 
    cadatro = record
        nome : string[30];
        idade : Integer;
        salario : real;
end;
var
    dados_cliente : cadatro;
begin
  write('informe o nome do cliente: ');
  read(dados_cliente.nome);
  write('informe a idade do cliente: ');
  read(dados_cliente.idade);
  write('informe o salario do cliente: ');
  read(dados_cliente.salario);
  write('O cliente ', dados_cliente.nome, ', ', dados_cliente.idade, ' anos, possui um salario de: ', dados_cliente.salario:6:2)
end.
