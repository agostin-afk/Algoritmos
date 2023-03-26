program consorsio;
var
    parcelas_total, parcelas_pagas, valor_parcelas, total_pago, valor_devendo: real;
begin
write('informe o total de parcelas: ');
readln(parcelas_total);
write('informe o total de parcelas pagas: ');
readln(parcelas_pagas);
write('informe valor das parcelas: ');
readln(valor_parcelas);
total_pago := (valor_parcelas*parcelas_pagas);
valor_devendo := (parcelas_total*valor_parcelas) - total_pago;
writeln('voce pagou: r$ ', total_pago:6:2, ' falta: r$ ', valor_devendo:6:2);
end.
