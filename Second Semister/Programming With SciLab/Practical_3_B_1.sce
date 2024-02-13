clc
x = 1:1:8
y = x^3
n = length(x)
del = %nan*ones(n, 6)
del(:, 1) = y'
for j = 2:6
    for i = 1:(n-j+1)
        del(i+j-1, j) = del(i+j-1, j-1) - del(i+j-2, j-1)
    end
end
del(:, 1) = []
del = round(del*10^3) / 10^3
mprintf("%5s %7s %8s %9s %8s %8s %8s", 'x', 'y', 'dy', 'd2y', 'd3y', 'd4y', 'd5y')
disp([x' y' del])