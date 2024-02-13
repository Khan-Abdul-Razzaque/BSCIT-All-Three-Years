DECLARE

    i int := 1;

BEGIN

    while i <= 5 loop
        dbms_output.put_line(i);
        i := i + 1;
    end loop;

END;