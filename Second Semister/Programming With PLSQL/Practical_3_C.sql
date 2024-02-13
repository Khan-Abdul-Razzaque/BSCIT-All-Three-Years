DECLARE

    i int := 1;
    oddsum int := 0;

BEGIN

    while i <= 20 loop
      oddsum := oddsum + i;
      i := i + 2;
    end loop;
    dbms_output.put_line('The sum of first 10 odd numbers is '||oddsum);

END;