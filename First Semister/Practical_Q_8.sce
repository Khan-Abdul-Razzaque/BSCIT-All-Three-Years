disp("To find the probability: (i) of an event A that sum of the numbers is at most 6, (ii) of an event B that sum of the numbers is at least 10")
// 11 means the first digit is come from first dice and the second is come from second dice
N = 36 // number of elements in the sample space
A = [11, 12, 13 ,14, 15, 21, 22, 23, 24, 31, 32, 33, 41, 42, 51] // event that the sum of numbers is at most 6
P1 = length(A)/N
disp(P1, "The probability that the sum of the numbers is at most 6 is:")
B = [55, 56, 65] // event that the sum of numbers is at least 10
P2 =  length(B)/N
disp(P2, "The probability that the sum of the numbers is at least 10 is:")