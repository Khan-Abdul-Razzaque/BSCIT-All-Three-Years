disp("recurrence relation of Fibonacci number f[n] = f[n - 1] + f[n - 2]")
x = poly(0, 'x')
g = x ^ 2 - x - 1
disp(g, "Characteristic equation of the racurrence relation is: ")
i = []
j = roots(g)
disp(j, "Roots of the characteristic equation j1, j2")
disp("For general equation fn = Ar ^ n + Br ^ n, values of A and B respectively are calculated as: ")
disp("Initial condition a n = 0 and n = 1 respectively are: ")
f1 = 1
f2 = 1
D = [1.6180340 -0.618034; (1.6180340) ^ 2 (-0.618034) ^ 2]
K = [1 1]
C = []
C = D/K
A = C(1)
B = C(2)
disp("Thus the solution id f[n] = 0.4472136 * ( (1.618034) ^ n - (-0.4472136) ^ n)")