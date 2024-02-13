BEGIN

    for i in -10..-1 loop
        i := (-1)*i;
        dbms_output.put_line(i);
    end loop;

END;