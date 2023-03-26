program Seriefor;
var p, aux: integer;
begin
    aux := 0; 
	for p := 0 to 10 do 
	begin
		writeln(aux);
		aux := aux + 10;
	end;
end.