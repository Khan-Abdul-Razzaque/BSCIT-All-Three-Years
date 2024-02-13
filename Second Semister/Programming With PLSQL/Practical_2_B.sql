DECLARE

  num1 int;

BEGIN

  num1:=:Enter_the_number;
  if num1 = 0 then
    dbms_output.put_line('The number is zero.');
  elsif mod(num1, 2) = 0 then
    dbms_output.put_line('The number is even.');
  else
    dbms_output.put_line('The number is odd.');
  end if;

END;