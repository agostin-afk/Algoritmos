program triangulo;
var
    A, B, C: integer; 
begin
    write('informe o valor A: ');
    read(A);
    write('informe o valor de B: ');
    read(B);
    write('informe o valor de C: ');
    read(C);
    if ((A > b) and (A>C)) then
        if (B > C) then
            write('A ordem eh: ', C,' -> ', B,' -> ',A)
        else
            write('A ordem eh: ', B, ' -> ', C, ' -> ', A)
    else if ((B > C) and (B>A)) then
        if (C>A) then
            write('A ordem eh: ',A, ' -> ', C, ' -> ',B)
        else 
            write('A ordem eh: ',C, ' -> ', A, ' -> ', B)
    else
        if (B > A) then
            write('A ordem eh: ',A, ' -> ',B, ' -> ', C)
        else 
            write('A ordem eh: ',B, ' -> ', A, ' -> ', C);
end.
