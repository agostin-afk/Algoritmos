program ordem_vetor_15;
var 
    vet : array [1..15] of Integer;
    i, c, j, aux, p : Integer;
begin
    for c := 1 to 15 do
        begin
            write('informe o valor da posição ', c, ' do vetor: ');
            read(vet[c]);
        end;
    for  j := 1 to 15 do
        begin
            for i := 1 to 14 do 
            begin
                if(vet[i] > vet[i+1]) then
                    begin
                        aux := vet[i];
                        vet[i] := vet[i+1];
                        vet[i+1] := aux;
                    end;
            end;
        end;
    writeln('o vetor organizado fica:');
    for p :=1 to 15 do
        begin
            writeln('vet[',p,']','= ', vet[p]);
        end;
end.
