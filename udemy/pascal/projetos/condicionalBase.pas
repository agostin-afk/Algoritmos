program Hello;
var A,B: real;
begin
write('insira o valor de A: ');
read(A);
write('insira o valor de B: ');
read(B);
    if A<B then
        write('Em ordem crescente: ', A:6:2, ' -> ', B:6:2)
    else
    write('Em ordem crescente: ', B:6:2, ' -> ', A:6:2);
read();
end.
