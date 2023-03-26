program troca_variavel;
var
   A,B,aux:integer;
begin
     write('Digite o valor de A: ');
     readln(A);
     write('Digite o valor de B: ');
     readln(B);
     aux := A;
     A:=B;
     B:=aux;
     writeln('A vale agora: ',A);
     writeln('B vale agora: ',B);
     readln();
end.
