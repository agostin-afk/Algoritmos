program medialer;
var
   nota1, nota2, media : real;
begin
     write('Digite a primeira nota ');
     readln(nota1);
     write('Digite a segunda nota ');
     readln(nota2);
     media := (nota1+nota2)/2;
     writeln('a media foi :', media);
     readln();
end.
