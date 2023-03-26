program Modulo;
var
    num: Integer;
begin
     writeln ('informe um numero para saber se é par ou impar: ');
     read(num);
     if ( num mod 2 = 0) then{ dá pra usar o mod com numeros do tipo float ?}
        writeln('Esse numero é par')
    else 
        writeln('Esse numero é impar');
end.
