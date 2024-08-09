# Write a program to accept five numbers from the user, store those number in a list, display smallest and largest number from the list.

def findsmallestAndLargest(I):
    small = large = I[0]
    for i in I:
        if i > large:
            large = i
        elif i < small:
            small = i
    return [large, small]

I = []
for i in range(5):
    integer = int(input(f"Enter element {i + 1}: "))
    I.append(integer)

print(f"\nList: {I}")
funcRes = findsmallestAndLargest(I)
print(f"Latest Int: {funcRes[0]}\nSmallest Int: {funcRes[1]}\n")