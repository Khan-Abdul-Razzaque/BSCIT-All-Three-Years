A = [0 0 0 1; 1 0 1 1; 1 0 0 1; 1 0 1 0]
disp(A, "Adjacency matrix of graph G is")
A2 = A ^ 2
A3 = A ^ 3
disp("The number of ones in A is equal to the number of edges in the graph")