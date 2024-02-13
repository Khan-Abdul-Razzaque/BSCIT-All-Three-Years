disp("To find: (i) Number of students taken at least one of the three subjects, (ii) number student taken none of the three subject. Economics(E), Mathematics(M) and Information Technology(I).")
T = 1200 // Total number of students.

E = 552 // Students taken Economics
M = 627 // Students taken Mathematics
I = 540 // Students tanken Information Technology
E_and_M = 217 // Students taken Economics and Mathematics
E_and_I = 307 // Students taken Economics and Informayion Technology
M_and_I = 240 // Students taken Mathematics and Information Technology
E_and_M_and_I = 213 // Students taken all three subjects

disp("By inclusion-exclusion principal")

E_or_M_or_I = E + M + I - E_and_M - E_and_I - M_and_I + E_and_M_and_I // Number of students taken at least one of the three subects

disp(E_or_M_or_I, "Number of students taken at least one the three subjects is:")

N = T - E_or_M_or_I // Stuedents taken none of the three subjects

disp(N, "Number of students taken none of the three subjects is:")