program ExeSaldo;
var
    saldo, cheque:real;
    nome: string;
begin
  write('insira o seu nome:');
  read(nome);
  saldo := 500;
  write('de quando eh o cheque que deseja passar ? ');
  read(cheque);
  if (cheque>saldo) then
  write('Desculpe ',nome,', mas voce nao possui creditos para esse cheque ')
  else 
  write(nome,', seu cheque foi realizado, seu novo saldo eh: ', (saldo-cheque):6:2);
 end.
