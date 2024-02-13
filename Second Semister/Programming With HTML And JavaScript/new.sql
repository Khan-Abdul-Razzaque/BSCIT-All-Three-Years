declare
num1 number;
num2 number;
temp number;
begin
  num1:=:num1;
  num2:=:num2;
  temp:=num1;
  num1:=num2;
  num2:=temp;
  dbms_output.put_line('the numbers are '||num1|| ' and '||num2);
end;