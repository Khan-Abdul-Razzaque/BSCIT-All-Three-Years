disp("To find: The probability that they all are boys")
B = 14 // Number of boys
G = 6 // Number of girls
C = B + G // Total number of sutdents
function K = ways(n, r)
    K = factorial(n)/(factorial(r)*factorial(n - r))
endfunction
A = ways(B, 4) // Total number of ways to select all 4 boys
disp(A, "Number of ways to select 4 boys uot of 14 boys is:")
T = ways(C, 4) // Total number of ways to select 4 students
disp(T, "Total number of ways to select 4 students out of 20 students is:")
P = A/T // Probability that all the selected students are boys
disp(P, "Probability that 4 students selected at random from 14 boys and 6 girls where all the 4 students are boys is:")