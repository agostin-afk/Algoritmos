program Vet_media;
var 
    notas : array[1..5] of real;
    media : real;
    cont : Integer;
begin
    writeln('informe o valor da nota do primeiro aluno: ');
    read(notas[1]);
    writeln('informe o valor da nota do segundo aluno: ');
    read(notas[2]);
    writeln('informe o valor da nota do terceiro aluno: ');
    read(notas[3]);
    writeln('informe o valor da nota do quarto aluno: ');
    read(notas[4]);
    writeln('informe o valor da nota do quinto aluno: ');
    read(notas[5]);
    cont := 0;
    media := notas[1] + notas[2] + notas[3] + notas[4] + notas[5];
    media := media/5;
    if (notas[1] < 6) then
    cont := cont +1;
    if (notas[2]<6) then
    cont := cont + 1;
    if (notas[3] < 6) then 
    cont := cont + 1;
    if (notas[4] < 6) then
    cont := cont + 1;
    if (notas[5] < 6) then
    cont := cont + 1;
    writeln('a media dos alunos foi: ', media:3:2);
    if (cont > 0) then
    writeln(cont,' alunos ficaram abaixo da media ');
end.
