disp("To find: The number of different time tables teacher can make")
D = 7 // Total number of days
P = 5 // number of papers to be held on 5 consecutive days
function day = papers(n, r)
    day = factorial(n)/factorial(n - r)
endfunction

A = papers(5, 5) // number of arrangements of the papers
disp(A, "Total number of possible arrangements of the papers is:")
B = factorial(7)/(factorial(1)*factorial(7 - 1)) // number of ways to select different days for the first paper
ans = A * B // Total number of time tables teacher can make
disp(ans, "Total number of time tables teacher can make is:")
