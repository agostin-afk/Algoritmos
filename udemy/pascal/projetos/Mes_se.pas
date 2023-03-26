program Mes_se;
var 
    num: integer;
    mes: String[60];
begin
    writeln ('infome um numero de 1 a 12');
    read(num);
    if (num = 1) then 
        mes := 'Janeiro'
    else if (num = 2) then
        mes := 'Fevereiro'
    else if (num = 3) then
        mes := 'Março'
    else if (num = 4) then
        mes := 'Abril'
    else if (num = 5) then
        mes := 'Maio'
    else if (num = 6) then
        mes :=  'Junho'
    else if (num = 7) then
        mes := 'Julho'
    else if (num = 8) then
        mes := 'Agosto'
    else if (num = 9) then 
        mes := 'Setembro'
    else if (num = 10) then
        mes := 'Outubro'
    else if (num  = 11) then
        mes := 'Novembro'
    else if (num = 12) then
        mes := 'Dezembro'
    else 
        mes := 'Invalido/Nao existe mes correspondente a este numero ';
    writeln('este eh o mes: ', mes);
end.
