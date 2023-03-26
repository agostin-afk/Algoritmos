program Hello;
var media,A,B,C : real;
begin
write('informe a nota da primeira prova: ');
read(A);
write('informe a nota da segunda nota: ');
read(B);
write('informe a nota da terceira prova: ');
read(C);
media := (A+B+C)/3;
if media >= 6 then
    write('Passou com media:',media:6:2)
else
    write('nao passou, sua media foi:', media:6:2);
end.
