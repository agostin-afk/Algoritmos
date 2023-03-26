program ExeAvaliacao;
var
   prova1, prova2, prova3, media : real;
begin
     writeln('informe a nota da primeira prova: ');
     read(prova1);
     writeln('informe a nota da segunda prova: ');
     read(prova2);
     writeln('informe a nota da terceira prova: ');
     read(prova3);
     media := (prova1*2 + prova2*3 + prova3*5)/10;
     write('a media das provas eh de: ', media);
     readln();
end.
