program Repeticao_10pares;
var 
    n,cont_par, i: integer;
    
begin
cont_par := 1;
n := 0;
  while(cont_par <= 10) do 
    begin
    n := n+1;
    if (n mod 2 = 0) then
        begin
            cont_par := cont_par + 1;
            writeln('O numero ',n, ' eh par');
        end;
    end;
end.
