'''
Question:
    Write a program to create a dictionary to store product details & perform following operations
        a) Display all the products
        b) Add new product
        c) Update existing product
'''

ProdDict = {
    "Prod1": "A",
    "Prod2": "B",
    "Prod3": "C"
}

# For A:
for prodKey in ProdDict:
    print(ProdDict[prodKey])

# For B:
ProdDict["Prod4"] = "D"
print(ProdDict)

# For C:
ProdDict["Prod1"] = "{{ Updated }}"
print(ProdDict)