clc
clear

x = [0 0.25 0.5 0.75 1];
y = [1 0.9412 0.8 0.64 0.5];

h = x(2)-x(1);

n = length(x);

area = 0;

for i = 1:n
    if i == 1 | i == n then
        area = area + y(i);
    elseif modulo(i-1, 3) == 0 then
        area = area + 2 * y(i);
    else
        area = area + 3 * y(i);
    end
end

area = area * (3*h/8);
printf("Value of integration by simpson 3/8 is = %f", area);