clc
clear
function f = dydx(x, y)
    f = (y-x) / (y+x);
endfunction

y0 = 1;
x0 = 0;
x = 0.4;
n = 5;
h = (x - x0) / n;
xx = x0;
y = y0;

for i = 1:n
    y = y + h*dydx(xx, y);
    xx = xx + h;
end

y = round(y*10^4)/10^4;
printf("y(x = 0.4) = %f", y);