program Exesaldo;

var 
 cheque, saldo, saldo_final:real;

begin 
 writeln ('informe o valor do cheque: ');

read (cheque);

saldo:= 500;

saldo_final:= saldo - cheque;

writeln ('o saldo final foi de: r$', saldo_final);

read ();

end.
