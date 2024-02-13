disp("To find: The event A U B and A n B when three coins are tossed")

S = ["HHH", "HHT", "HTH", "HTT", "THH", "THT", "TTH", "TTT"] // sample space of the tossed coins where T means tail, H means head
A = ["HHH", "HHT", "HTH", "THH"] // Event that at least two heads  appears
B = ["HHH", "TTT"] // Event that all the tosses are the same
P = union(A,B)
disp(P, "The event A U B is:")
Q = intersect(A, B)
disp(Q, "The event A n B is:")