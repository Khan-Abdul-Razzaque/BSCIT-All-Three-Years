# Question: Write a program to create tuple of integer values & display sum of even elements & odd elements separately.

intTuple = (10, 2, 3, 3, 4, 5,11 , 6, 6 ,7, 7 ,8, 9)
evenSum = oddSum = 0
for item in intTuple:
    if (item % 2 == 0):
        evenSum += item
    else:
        oddSum += item

print(f"The sum of even elements is {evenSum}\nThe sum of odd elements is {oddSum}")