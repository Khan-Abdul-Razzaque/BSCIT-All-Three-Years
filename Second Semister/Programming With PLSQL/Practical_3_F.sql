DECLARE

    area decimal(10, 2);

BEGIN

    for radius in 1..10 loop
        area := 3.14 * radius ** 2;
        dbms_output.put_line('The area of circle with radius '||radius||' cm is '||area||' sqcm.');
    end loop;

END;