DECLARE

    num1 int;
    facto int := 1;

BEGIN

    num1:=:Enter_the_number;
    for i in 2..num1 loop
        facto := facto * i;
    end loop;
    dbms_output.put_line('The factorial of '||num1||' is '||facto);

END;