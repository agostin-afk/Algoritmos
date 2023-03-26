program media2;
var media,A,B,C : real;
begin
write('informe a nota da primeira prova: ');
read(A);
write('informe a nota da segunda nota: ');
read(B);
write('informe a nota da terceira prova: ');
read(C);
media := (A+B+C)/3;
if media >= 7 then
    write('Passou com media:',media:6:2)
else if media >= 4 then
    write('esta de recuperacao com media:', media:6:2)
else
    write('voce nao passou, pois ficou com media', media:6:2);
end.