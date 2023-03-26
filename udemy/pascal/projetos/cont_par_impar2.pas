program cont_par_impar;
var
    inicio, final, aux, num_par, num_impar: Integer;
begin
  writeln ('informe o inicio e o final, respectivamente, da contagem: ');
  read(inicio);
  read(final);
  num_impar := 0;
  num_par := 0;
  while(inicio > final) do
    begin
    write('o numero inicial tem que ser menor que o numero final, insira um novo numero');
    read(inicio);
    end;
  aux := inicio;
  while(aux <= final) do
        begin
        if (aux mod 2 = 0) then
            num_par := num_par + 1
        else
            num_impar := num_impar + 1;
        aux  := aux+1;
    end;
    writeln('entre ', inicio,' e ', final,' exitem ', num_par,' numeros pares e ', num_impar, ' impares');
end.
