A = [0 0 0 1; 1 0 1 1; 1 0 0 1; 1 0 1 0];
disp(A, "Adjacency matrix of the graph G is")

A4 = A ^ 4;
A3 = A ^ 3;
A2 = A ^ 2;
B4 = A + A2 + A3 + A4;
B4 = [4 1 1 7 7 0 0 0 0 3 7 4 4 4 1 1 7 7]

for  i = 1:18
    if(B4(i) ~= 0) then
        B4(i) = 1;
    end
end

disp(B4, "Replacing non_zero entries of B4 with 1, we get path(reachability) matrix P is:")
disp("There are zero entries in P, therefor the graph is not strongly connected")