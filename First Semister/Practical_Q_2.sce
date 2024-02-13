disp("Q.1 To find: First six factorial values without using inbuilt factorial function")
function F = fact(n)
    if n == 0 then
        F = 1
    else
        F = n * fact(n - 1)
    end
endfunction

for i = 1:6
    A = fact(i) // factorial of first six numbers
    disp(A)
end
disp("first six factorial values using n! = n * (n - 1)! are:")

disp("Q.2 To find: The values of (i) 6!, (ii) 6!/4!, (iii) 10!/7! using inbuilt function")

A = factorial(6) // value of 6!
B = factorial(4) // value of 4!
C = factorial(7) // value of 7!
D = factorial(10) // value of 10!
AB = A/B // valus of 6!/4!
DC = D/C // Valus of 10!/7!

disp(A, AB, DC, "The values of 6!, 6!/4!, 10!/7! are:")