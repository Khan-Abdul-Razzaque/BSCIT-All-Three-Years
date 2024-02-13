noS = 36 // total elements in the sample space
// 51, 52, 53,... first digit means the value appears on the first die and the second digit means the value appears on the second die
A = [51, 52, 53, 54, 55, 56] // elements that 5 appears on the first die
B = [55, 56] // elements that the sum of first and second die is 10 or greater than 10
P1 = length(B)/noS // probability that the sum is 10 if 5 appears on the first die
disp(P1, "The probability that the sum is 10 or greater than 10 if 5 appears on the first die is:")

D = [51, 15, 52, 25, 53, 35, 54, 45, 55, 56, 65] // elements that 5 appears at least on of the dice
E = [55, 56 ,65] // elements that the sum of first and second die is 10 or greater than 10
P2 = length(E)/noS // probability that the sum is 10 or greater than 10 if 5 appears at least one of the dice
disp(P2, "probability that the sum is 10 or greater than 10 if 5 appears at least one of the dice")