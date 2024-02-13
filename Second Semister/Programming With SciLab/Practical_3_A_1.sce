x = 10:10:50
y = [46 66 81 93 101]
n = length(x)
del = %nan * ones(n, 5)
del(:, 1) = y'
for j = 2:6
    for i = 1:(n-j+1)
        del(i, j) = del(i+1, j-1) - del(i, j-1)
    end
end

del(:, 1) = []
del = round(del*10^3) / 10^3
mprintf("%4s %5s %6s %6s %6s %6s %6s", 'x', 'y', 'dy', 'd2y', 'd3y', 'd4y', 'd5y')
disp([x'  y'  del])