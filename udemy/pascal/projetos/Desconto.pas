program ExeDesconto;
var
    valor, desconto: real;
begin
write('informe o valor da compra: ');
read(valor);
if valor >500 then
    desconto := (valor*20)/100
else if valor >= 200 then
    desconto := (valor*15)/100
else 
desconto := (valor*10)/100;
valor := valor - desconto;
write('o valor a ser pago eh: ', valor:6:2);
end.
