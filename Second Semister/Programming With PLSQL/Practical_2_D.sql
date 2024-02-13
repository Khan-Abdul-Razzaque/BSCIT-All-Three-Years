DECLARE

    num1 int;
    num2 int;
    num3 int;


BEGIN

    num1:=:Enter_the_first_number;
    num2:=:Enter_the_second_number;
    num3:=:Enter_the_third_number;
    if num1 < num2 then
        num1 := num2;
    end if;
    if num1 < num3 then
        num1 := num3;
    end if;
    dbms_output.put_line('The greatest number is '||num1);

END;