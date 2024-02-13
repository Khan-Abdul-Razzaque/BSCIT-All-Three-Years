disp("The recurrence relation for a[n] = 2 * a[n - 1] - 3 * a[n - 2]")
x = poly(0, 'x')
g = x ^ 2 - 2 * x - 3
disp(g, "Characteristic polynomial equation for the above recurrence")
j = []
j = roots(g)
disp(j, "Roots of the characteristic equation j1, j2")
disp("For general solution is a[n] = c1 * 3 ^ n + c2 * (-1) ^ n")
disp("Initial comdition at n = 0 and n = 1 raspectively are: ")
a0 = 1
a1 = 2
D = [1 1; 3 -1]
K = [1 2]
C = []
C = D/K
C1 = C(1)
C2 = C(2)
disp("Thus the solution is a[n = 0.75 * 3 ^ n + 0.25 * 1 ^ n]")