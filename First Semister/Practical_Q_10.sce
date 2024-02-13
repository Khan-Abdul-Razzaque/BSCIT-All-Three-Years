clc
disp("Q.1 To find: Number of ways a student can choose a textbook mathematics(M), Progamming(P) or Networking(N)")
M = 6 // Number of Mathematics textbook
P = 5 // Number of Programming textbook
N = 3 // Number of Networking textbook
T = M + P + N // Total number of textbooks in the shelf
ans_i = factorial(T)/(factorial(1)*factorial(T - 1))
disp(ans_i, "Total number of ways a student can choose a from the shelf is:")

disp("Q.2 To find: number of ways to select an integer between 1-20 which are divisible by 4 or prime")
A = 0
B = 0 // number of integers which are divisible by 4 or prime
for i = 1:19
    for j = 2:i
        if modulo(i, j) == 0 then
            A = A + 1
        end
    end
    if (A == 1) then
        B = B + 1
    elseif modulo(i, 4) == 0 then
        B = B + 1
    end
    A = 0
end

ans_ii = factorial(B)/(factorial(1)*factorial(B - 1))
disp(ans_ii, "Total number of ways to select an integer from 1-20 which are divisible by 4 or prime is:")

disp("Q.3 To find: The number of ways to select an integer between 1-20 which are divisible by 2 or 5")
B = 0
for i = 1:19
    if modulo(i, 2) == 0 then
        B = B + 1
    elseif modulo(i, 5) == 0 then
        B = B + 1
    end
end
ans_iii = factorial(B)/(factorial(1)*factorial(B - 1))
disp(ans_iii, "Total number of ways to select an integer between 1-20 which are divisible by 2 or 5 is:")