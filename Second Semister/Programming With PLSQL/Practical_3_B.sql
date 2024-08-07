DECLARE

    i int := 1;
    sum1 int := 0;

BEGIN

    while i <= 5 loop
        sum1 := sum1 + i;
        i := i + 1;
    end loop;
    dbms_output.put_line('The sum of first five numbers is '||sum1);

END;