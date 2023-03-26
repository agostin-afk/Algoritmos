program ordem_vetor_simples;
var 
    vet : array [1..3] of Integer;
    aux, i, p : Integer;
begin
  for i := 1 to 3 do
    begin
        write('informe o valor do vetor na posição ', i,': ');
        read(vet[i]);
    end;
    for p := 0 to 1 do
    begin
        for i := 1 to 2 do
        begin
            if (vet[i] > vet[i + 1]) then
                begin
                aux := vet[i];
                vet[i] := vet[i + 1];
                vet[i+1] := aux; 
                end;
        end;
    end;
    writeln('o vetor em ordem crescente eh:');
    for i := 1 to 3 do
   write(vet[i],' ');
end.