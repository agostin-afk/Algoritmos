{numeros primos }
program Primos;
var 
    num, i: Integer;
    condicao : boolean;
begin
    condicao := true;
    write('informe um numero para saber se é primo ou não: ');
    read(num);
    i := 2;
    while( i <= num/2) do 
        begin
            if (num mod i = 0) then
                condicao := false;
                i := i+1;
        end;
        
    if (condicao = true) then
        write(' o numero ', num, ' é primo ')
    else 
        write('o numero ', num, ' não é primo ');
end.
