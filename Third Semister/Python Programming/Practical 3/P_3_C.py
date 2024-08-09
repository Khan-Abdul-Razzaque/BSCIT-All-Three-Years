# Write a program to define a list of integer values and display sum of all the elements from the list

def findSum(integers):
    addition = 0
    for i in integers:
        addition += i
    return addition

integers = [3, 4, 6, 7, 8 ,8, 9, 9]
print(f"The sum of elments in {integers} is {findSum(integers)}")