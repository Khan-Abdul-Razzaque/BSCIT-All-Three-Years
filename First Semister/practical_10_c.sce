disp("The recurrence relation for a[n] = 11 * a[n = 1] - 39 * a[n - 2] + 45 * a[n - 3]")
x = poly(0, 'x')
g = x ^ 3 - 11 * x ^ 2 + 39 * x - 45
disp(g, "Characteristic polynomial equation for the above recurrence relation")
j = []
j = roots(g)
disp(j, "Roots of the characteristic equation j1, j2")
disp("for general solution is a[n] = c1 * 3 ^ n + c2 * n * 3 ^ n + c3 * 5 ^ n")
disp("Initial condition at n = 0 and n = 1 respectively are: ")
a0 = 5
a1 = 11
a2 = 25
D = [1 0 1; 3 3 5; 9 18 25]
K = [5 11 25]
C = []
C = D/K
C1 = C(1)
c2 = C(2)
C3 = C(3)
disp("Thus the solution is a[n] = (4 - 2 * n) * 3 ^ n + 5 ^ n")