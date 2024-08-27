'''
Question:
    Write a program to create a dictionary to store product details & perform following operations
        a) Display all the products
        b) Add new product
        c) Update existing product
'''

prodDict = {
    "Prod1": "A",
    "Prod2": "B",
    "Prod3": "C"
}

# For A:
for prodKey in prodDict:
    print(prodDict[prodKey])

# For B:
prodDict["Prod4"] = "D"
print(prodDict)

# For C:
prodDict["Prod1"] = "{{ Updated }}"
print(prodDict)