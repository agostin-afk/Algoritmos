program Mes_case;
var 
    num: integer;
    mes: String[60];
begin
  write('informe um numero de 1 ate 12 para imprimir seu mes correspondente: ');
  read(num);
  case num of
    1: mes := 'Janeiro';
    2: mes := 'Fevereiro';
    3: mes := 'Março';
    4: mes := 'Abril';
    5: mes := 'Maio';
    6: mes := 'Junho';
    7: mes := 'Julho';
    8: mes := 'Agosto';
    9: mes := 'Setembro';
    10: mes := 'Outubro';
    11: mes := 'Novembro';
    12: mes := 'Dezembro';
    else 
        mes := 'Numero invalido, nao possui um mes correspondente';
    end;
    write('O mes correspondente desse numero eh: ', mes);
end.
