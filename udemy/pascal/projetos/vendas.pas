program vendas;
var comissao, fixo, total, vendas:real;
begin write ('informe o valor das vendas: ');
readln (vendas);
comissao:= vendas * (15 / 100);
fixo:= 800;
total:= fixo + comissao;
write ('O valor qque recebera eh: ', total: 6:2);
readln ();
end.
