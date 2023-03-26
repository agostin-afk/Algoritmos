program matriz3x3;
var 
    vet : array[1..3,1..3] of Integer;
    l,c : Integer;
begin
    for l := 1 to 3 do
        begin
            for c := 1 to 3 do
            begin
                write('informe o valor do vetor na posição [',l,', ',c,']: ');
                read(vet[l,c]);
            end;
        end;
    for l := 1 to 3 do
        begin
            for c := 1 to 3 do 
                begin
                    writeln('o valor do vetor na posição [',l,', ',c,'] é: ', vet[l,c]);
                end;
        end;
   
end.
