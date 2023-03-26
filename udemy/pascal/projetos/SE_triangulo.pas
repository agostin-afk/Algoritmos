program triangulo;
var
    l1, l2, l3: real; 
begin
  write('informe o lado 1: ');
  read(l1);
  write('informe o lado 2: ');
  read(l2);
  write('informe o lado 3: ');
  read(l3);
    if ((l1+l2)>l3) and ((l2+l3)> l1) and ((l3+l1)>l2) then
        if (l1 = l2) and (l2= l3) then
            write('os lados formam um triangulo equilatero')
        else if (l1 = l2) or (l2 = l3) or (l3 = l1) then 
            write('os lados formam um triangulo isosceles')
        else 
            write('os lados formam um triangulo escaleno')
    else 
        write('os lados nao formam um triangulo');
end.
