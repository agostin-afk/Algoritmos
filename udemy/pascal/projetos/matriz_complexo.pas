program matriz_complexo;
var
    vet : array [1..4,1..4] of Integer;
    matriz_2x : array [1..4,1..4] of Integer;
    coluna2 : array [1..4] of Integer;
    linha3 : array [1..4] of Integer;
    soma, l, c, cont_media, maior, menor : Integer;
    pos_maiorL, pos_maiorC, pos_menorL, pos_menorC, pares, impares : Integer;
    media : real;
begin
    pos_menorC := 1;
    pos_menorL := 1;
    pos_maiorC := 1;
    pos_maiorL := 1;
    soma := 0;
    pares := 0;
    impares := 0;
    for l := 1 to 4 do
        begin
            for c := 1 to 4 do 
                begin
                    write('informe o valor da matriz na posição [',l,', ',c,']: ');
                    read(vet[l,c]);
                    soma := soma + vet[l,c];
                    if(c = 2) then
                        coluna2[l] := vet[l,c];
                    if(l = 3 ) then
                        linha3[c] := vet[l,c];
                    if(vet[l,c] mod 2 = 0) then
                        pares := pares + 1
                    else 
                        impares := impares + 1;
                end;
        end;
    maior := vet[1,1];
    menor := vet[1,1];
    media := soma/16;
    cont_media := 0;
    writeln('Os valores da matriz são: ');
    for l := 1 to 4 do 
        begin
            for c := 1 to 4 do
                begin
                    write(' [',vet[l,c],'] ');
                    if( c = 4) then
                        writeln();
                    if(vet[l,c] > media) then
                        cont_media := cont_media + 1;
                    if (maior < vet[l,c]) then
                        begin
                            maior := vet[l,c];
                            pos_maiorL := l;
                            pos_maiorC := c;
                        end;
                    if(menor > vet[l,c]) then
                        begin
                            menor := vet[l,c];
                            pos_menorL := l;
                            pos_menorC := c;
                        end;
                    matriz_2x[l,c] := vet[l,c]*2;
                end;
        end;
    writeln();
    writeln('A soma dos valores da matriz deu: ', soma);
    writeln('A media dos valores da matriz deu: ', media:6:2);
    writeln();
    write('Os valores da diagonal principal são: ');
    writeln();
    for l := 1 to 4 do
        begin
            for c := 1 to 4 do 
                begin
                    if(c = l) then
                        write(' [',vet[l,c],'] ');
                end;
        end;
    writeln();
    writeln();
    write('Os valores da diagonal secundaria são: ');
    writeln();
    for l := 1 to 4 do
        begin
            for c := 1 to 4 do 
                begin
                    if((c+l) = 5) then
                        write(' [', vet[l,c],'] ');
                end;
        end;
    writeln();
    writeln();
    write('Os valores da coluna 2 são: ');
    writeln();
    for l := 1 to 4 do
        begin
            write(' [',coluna2[l],'] ');
        end;
    writeln();
    writeln();
    write('Os valores da linha 3 são: ');
    writeln();
    for l := 1 to 4 do
        begin
        write(' [',linha3[l],'] ');
        end;
    writeln();
    writeln();
    writeln(cont_media,' Numeros acima da media.');
    write('Os valores acima da media foram: ');
    writeln();
    for l := 1 to 4 do 
        begin
            for c := 1 to 4 do
                begin
                    if(vet[l,c] > media) then
                    write(' [',vet[l,c],'] ');
                end;
        end;
    writeln();
    writeln();
    writeln('O maior valor da matriz foi: ', maior);
    writeln('na posição: [', pos_maiorL,', ', pos_maiorC,'] ');
    writeln();
    writeln();
    writeln('O menor valor da matriz foi: ', menor);
    writeln('Na posição: [', pos_menorL,', ', pos_menorC,'] ');
    writeln();
    writeln('A matriz com todos os elementos duplicados fica: ');
    for l := 1 to 4 do 
        begin
            for c := 1 to 4 do
                begin
                write(' [',matriz_2x[l,c],'] ');
                if(c = 4) then
                writeln();
                end;
        end;
    writeln();
    writeln();
    write('Os valores pares da matriz são: ');
    writeln();
    for l := 1 to 4 do 
        begin
            for c := 1 to 4 do
                begin
                    if(vet[l,c] mod 2 = 0) then
                        write(' [',vet[l,c],'] ');
                end;
        end;
    writeln();
    writeln();
    write('Os valores impares da matriz são: ');
    writeln();
    for l := 1 to 4 do
        begin
            for c := 1 to 4 do
                begin
                    if(vet[l,c] mod 2 = 1)then
                        write(' [', vet[l,c],'] ');
                end;
        end;
end.
