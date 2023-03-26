program maior_menor;
var n1, n2, n3:integer;
begin write ('informe o primeiro numero: ');
read (n1);
write ('informe o segundo numero: ');
read (n2);
write ('informe o terceiro numero: ');
read (n3);
if (n1 > n2)
  and (n1 > n3) then writeln('o maior eh: ', n1)
else if (n2 > n1)
    and (n2 > n3) then writeln('o maior eh: ', n2)
else
    writeln('o maior eh: ', n3);

if (n1 < n2)
  and (n1 < n3) then writeln('o menor eh: ', n1)
else if (n2 < n1)
    and (n2 < n3) then writeln('o menor eh: ', n3)
else
    writeln('o menor eh: ', n3) end.
