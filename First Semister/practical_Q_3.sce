disp("To find the value of: (i) x^3 - 2x + 1 at x = 2, (ii) x^2 - 1 at x = 3, (iii) 2x^3 - 7x^2 + 7x - 15 at x = 5")

x = poly(0, 'x')
p = x^3 - 2*x + 1
disp(p, "The polynomial is:")
a = horner(p, 2)
disp(a, "The value of the polynomial at x = 2 is:")

x = poly(0, 'x')
q = x^2 - 1
disp(q, "The polynomial is:")
b = horner(q,3)
disp(b, "The value of the polynomial at x = 3 is:")

x = poly(0, 'x')
r = 2*x^3 - 7*x^2 + 4*x - 15
disp(r, "The polynomial is:")
c = horner(r, 5)
disp(c, "The value of the polynomial at x = 5 is:")