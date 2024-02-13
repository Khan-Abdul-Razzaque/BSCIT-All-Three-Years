function root = newtonraphson(f, df)
    tol = 1.e-4
    maxit = 5
    n = 1
    x(n) = 3

    while (1)
        x(n + 1) = x(n) - (f(x(n)) / df(x(n)))

        if n == maxit then
            break
        end
        n = n + 1
    end
    root = x(n + 1)
endfunction

function f = f1(x)
    f = x^3 - 2*x^2 - 2*x - 1
endfunction

function df = df1(x)
    df = 3*x^2 - 4*x - 2
endfunction

root = newtonraphson(f1, df1)
root = round(root * 10^5) / 10^5
disp("The root of the eqaution = ", root)