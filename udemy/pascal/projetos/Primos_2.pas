{numeros primos }
program Primos2_0;
var 
    num, i, cont_primos, numero_escolha: Integer;
    condicao : boolean;
begin
    condicao := true;
    write('informe até qual primos voce gostaria de ver: ');
    read(numero_escolha);
    cont_primos := 1;
    num := 1;
    while(cont_primos <= numero_escolha) do
    begin
        condicao := true;
        i := 2;
        num := num+1;
        while ( i <= num/2)  do 
            begin
                if (num mod i = 0) then
                    begin
                    condicao := false;
                    
                    end;
                 i := i +1;
            end;
            
        if (condicao = true) then
        begin
            writeln(' o numero ', num, ' é o ', cont_primos,'° numero primo ');
            cont_primos := cont_primos+1;
        end;
    end;
end.