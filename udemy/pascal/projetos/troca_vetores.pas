program troca_vetores;
var 
    vetA : array [1..5] of Integer;
    vetB : array [1..5] of Integer;
    aux, c,b,a : Integer;
begin
    for c := 1 to 5 do 
    begin
    write('informe o valor da posição ', c,' do vetor A: ');
    read(vetA[c]);
    write('informe o valor da posição ', c,' do vetor B: ');
    read(vetB[c]);
    end;
    for b := 1 to 5 do
    begin
        aux := vetA[b];
        vetA[b] := vetB[b];
        vetB[b] := aux;
    end;
    writeln('os valores do vetor A agora são: ');
    for a := 1 to 5 do
    begin
    writeln('vetor A[',a,'] = ',vetA[a]);
    end;
    writeln('os valores do vetor B agora são: ');
    a := 0;
    for a := 1 to 5 do
    begin
    writeln('vetor B[',a,'] = ',vetB[a]);
    end;
    
end.
