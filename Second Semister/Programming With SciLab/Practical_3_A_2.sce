x = 10:10:50
y = [46 66 81 93 101]

n = length(x)
del = %nan * ones(n, 5)
del(:, 1) = y'
for j = 2:5
    for i = 1:(n-j+1)
        del(i, j) = del(i+1, j-1) - del(i, j-1)
    end
end

del = round(del*10^3)/10^3
mprintf("%5s %7s %8s %9s %8s %8s", 'x', 'y', 'dy', 'd2y', 'd3y', 'd4y')
disp([x' del])

del(:, 1) = []
X = 12
h = x(2) - x(1)
p = (X - x(1)) / h
x0 = x(1)
y0 = y(1)
dely0 = del(1,:)
Y = y0
for i = 1:length(dely0)
    t = 1
    for j = 1:i
        t = t*(p-j+1)
    end
    Y = Y + t*dely0(i)/factorial(i)
end
disp(Y, "f(12) = ")