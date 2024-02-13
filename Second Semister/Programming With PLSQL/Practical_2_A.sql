DECLARE

    num1 int;
    num2 int;

BEGIN

    num1:=:Enter_the_first_number;
    num2:=:Enter_the_second_number;
    if num1 < num2 then
      num1:=num2;
    end if;
    dbms_output.put_line('The greater number is '||num1);

END;