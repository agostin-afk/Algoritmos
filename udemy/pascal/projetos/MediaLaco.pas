program MediaLaco;
var 
    soma, media, nota: real;
    p : integer;
begin
    soma := 0;
    writeln('informe as notas dos alunos da sala para tirar a media: '); 
    for p := 1 to 10 do
        begin
            read(nota);
            if (nota >=0) and (nota<=10) then
                soma := soma + nota
            else 
                begin
                    writeln('nota invalida, tente novamente');
                    p := p-1;
                end;
        end;
    media := soma/p;
    write('A media da sala eh: ',media:3:2);
end.
