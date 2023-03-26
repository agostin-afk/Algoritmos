program Vet_maior_menor;
var 
    notas : array[1..10] of real;
    maior, menor : real;
    i : Integer;
begin
    for i := 1 to 10 do
    begin
    write('infome o valor da posição ',i,' do vetor: ');
    read(notas[i]);
    if (i = 1) then
        begin
            maior := notas[i];
            menor := notas[i];
        end;
    if (notas[i]> maior) then
    maior := notas[i];
    if (notas[i]< menor) then
    menor := notas[i];
    end;
    write('maior: ', maior:6:2, ' menor: ', menor:6:2);
end.
