# Take a list with all numbers and print all the elements from the list that are less than 5

def printLessThan_5(List):
    for i in List:
        if i < 5:
            print(i)

A = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
printLessThan_5(A)