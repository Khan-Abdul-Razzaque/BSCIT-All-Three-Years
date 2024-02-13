disp("Q.1 To find: The number of ways can a committee of 8 people be formed out of 10  men and 5 women")
M = 10 // Total number of men
W = 5 // Total number of women
C = 8 // total number of participent in the committee
T = M + W // Total number of people

function w = ways(n, r)
    w = factorial(n)/(factorial(r) * factorial(n - r))
endfunction

A = ways(T, C)
disp(A, "The number of ways can a committee of 8 people be formed out of 10 men and 5 women is:")
disp("Q.2 To find: The number of ways can a committee of 6 men and 2 women be formed out of 10 men and 5 women")
P = ways(10, 6) // The number of ways that 6 men can be selected out of 10 men
Q = ways(5, 2) // The number of ways that 2 women can be selected out of 5 women
R = P * Q
disp(R, "The number of ways can a committee of 6 men and 2 women be formed out of 10 men and 5 women is:")