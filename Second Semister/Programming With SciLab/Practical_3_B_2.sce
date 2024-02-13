clc
clear
x = 10:10:50
y = [46 66 81 93 101]
n = length(x)
del = %nan * ones(n, 5)
del(:, 1) = y'
for j = 2:5
    for i = 1:(n-j+1)
        del(i+j-1, j) = del(i+j-1, j-1) - del(i+j-2, j-1)
   end
end
del = round(del*10^3) / 10^3
mprintf("%5s %7s %8s %9s %8s %8s", 'x', 'y', 'dy', 'd2y', 'd3y', 'd4y')

disp([x' del])
X = 42
h = x(2) - x(1)
p = (X - x(n)) / h
xn = x(n)
yn = y(n)
delyn = del(n, :)
Y = 0
for i = 0:length(delyn) - 1
    t = 1
    for j = 1:i
        t = t * (p + j -1)
    end
    Y = Y + t * delyn(i + 1) / factorial(i)
end
disp("y(42) = ", Y)
function output = name(input)
// Description of name(input)
endfunction