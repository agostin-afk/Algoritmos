program vetor_complexo;
var
    vet : array[1..5] of real;
    soma, media : real;
    mais_media, qtd_positivo, qtd_negativo, i, c : Integer;
begin
    mais_media := 0;
    qtd_negativo := 0;
    qtd_positivo := 0;
    soma := 0;
    i := 0;
    c := 0;
    for i := 1 to 5 do
        begin
            write('informe o valor da posição ',i, ' do vetor: ');
            read(vet[i]);
            soma := soma + vet[i];
            if(vet[i] > 0) then 
            qtd_positivo := qtd_positivo + 1;
            if (vet[i] < 0) then 
            qtd_negativo := qtd_negativo + 1;
        end;
    media := soma/5;
    for c := 1 to 5 do
        begin
            if(vet[c] >= media) then
                begin
                mais_media := mais_media + 1;
                writeln('O valor da posição ', c, ' do vetor eh: ',vet[c]:6:2);
                end;
        end;
    writeln('No vetor há ', qtd_positivo, ' numeros positivos');
    writeln('No vetor há ', qtd_negativo,' numeros negativos');
    writeln('A soma deu: ', soma:6:2);
    writeln('A media foi: ', media:6:2);
    writeln('Teve ', mais_media, ' numeros acima da media');
end.
