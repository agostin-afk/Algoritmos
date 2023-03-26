program Vet_media2;
var 
    notas : array[1..5] of real;
    cont , i : Integer;
    media : real;
begin
    cont :=0;
    media := 0;
    for i := 1 to 5 do
    begin
    writeln('informe a nota do ',i,'° aluno: ');
    read(notas[i]);
    media := media + notas[i];
    if(notas[i]<6) then
    cont := cont+1;
    end;
    media := media/5;
    writeln('A media dos alunos foi: ', media:3:2);
    if(cont > 0) then
    writeln(cont,' Alunos ficaram abaixo da media');
end.
