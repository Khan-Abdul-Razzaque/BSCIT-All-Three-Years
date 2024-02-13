DECLARE

    num1 int;
    num2 int;
    sum1 int;

BEGIN

    num1:=:Enter_number_1;
    num2:=:Enter_number_2;
    sum1:= num1 + num2;
    dbms_output.put_line('The sum of '||num1||' and '||num2||' is '||sum1);

END;