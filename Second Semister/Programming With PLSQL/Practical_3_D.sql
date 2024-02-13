create table aoc
(
    radius int,
    area int
);

DECLARE

    radii int;
    area decimal(10, 2);

BEGIN

    radii:=:Enter_the_radius;
    area := 3.14*radii**2;
    insert into aoc values (radii, area);

END;