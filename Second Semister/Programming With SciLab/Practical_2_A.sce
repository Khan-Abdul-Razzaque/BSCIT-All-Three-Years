// clc
// function root = bisection(f, a, b)
//     tol = 1.e-4
//     maxit = 50
//     Ea = 1
//     n = 1

//     if (f(a(n)) * f(b(n))) > 0 then
//         disp("Root of the equation does not belong to the given interval")
//         abort
//     else
//         while (1)
//             c(n) = (a(n) + b(n)) / 2
//             if (f(a(n)) * f(c(n))) < 0 then
//                 b(n + 1) = c(n)
//                 a(n + 1) = a(n)
//             elseif (f(b(n)) * f(c(n))) < 0 then
//                 a(n + 1) = c(n)
//                 b(n + 1) = b(n)
//             else
//                 break
//             end
            
//             if n > 1 then
//                 Ea(n) = 100 * abs((c(n) - c(n - 1)) / c(n))
//             end
            
//             if Ea(n) < tol | n == maxit then
//                 break
//             end
            
//             n = n + 1
//         end
//     end
//     root = c(n)
// endfunction

// function f = f1(x)
//     f = x ^ 3 - 2 * x ^ 2 - 2 * x - 1
// endfunction

// a = 2
// b = 3
// root = bisection(f1, a, b)
// root = round(root * 10 ^ 5) / 10 ^ 5
// disp("The root of the equation = ", root)







function root = bisection(f, a, b)
    tol = 1e-4;
    maxit = 50;
    Ea = 1;
    n = 1;

    if (f(a(n))*f(b(n)) > 0) then
        disp("The root of the given equation does not belong to given range.")
        abort;
    else
        while (1)
            c(n) = (a(n) + b(n)) / 2;
            if f(a(n)) * f(c(n)) < 0 then
                b(n+1) = c(n);
                a(n+1) = a(n);
            else
                a(n+1) = c(n);
                b(n+1) = b(n);
            end

            if n > 1 then
                Ea(n) = 100*abs(c(n) - c(n-1))/c(n);
            end

            if Ea(n) < tol | n == maxit then
                break;
            end
            n = n + 1;
        end
    end
    root = c(n);
endfunction

function f = f1(x)
    f = x ^ 3 - 2 * x ^ 2 - 2 * x - 1;
endfunction

a = 2;
b = 3;
root = bisection(f1, a, b);
root = round(root * 10^5)/10^5;
printf("The root of the equation using bisection rule is = %.5f", root);