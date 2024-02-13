DECLARE

    num1 int;
    num2 int;
    sum1 int;

BEGIN

    num1 := 4;
    num2 := 5;
    sum1 := num1 + num2;
    dbms_output.put_line('The sum of '||num1||' and '||num2||' is '||sum1);

END;