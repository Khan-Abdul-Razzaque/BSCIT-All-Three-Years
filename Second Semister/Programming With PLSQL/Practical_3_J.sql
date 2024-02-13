DECLARE

    tLast int := 0;
    sLast int := 1;
    vlast int;

BEGIN

    dbms_output.put_line('This is the Fibonacci series:');
    dbms_output.put_line(tLast);
    dbms_output.put_line(sLast);
    for i in 1..15 loop
        vlast := sLast + tLast;
        tLast := sLast;
        sLast := vlast;
        dbms_output.put_line(vlast);
    end loop;

END;