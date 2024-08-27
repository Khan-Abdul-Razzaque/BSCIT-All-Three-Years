# Write a program that takes two lists and returns true if they have atleast one common element

def isCommonElement(A, B):
    for i in A:
        if i in B:
            return True
    return False

A = [2, 4, 3, 6, 7, 8, 9, 0]
B = [3, 5, 6, 8, 1, 11, 0]
if isCommonElement(A, B):
    print("True")
else:
    print("False")