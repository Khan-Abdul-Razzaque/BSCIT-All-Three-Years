'''
Question:
    Create A tuple to store name of the colors and perform the following operations on tuple 
       a) Display number of colors present in the given tuple
       b) Display the count of specific color from the tuple
       c) Add new color to the given tuple
       d) Delete the tuple
'''

colorTuple = ('white', 'black', 'green', 'blue', 'red', 'yellow', 'voilet', 'lightblue', 'gray', 'white', 'black', 'green', 'white', 'blue', 'magenta', 'lime')

# For A:
print(len(colorTuple))

# For B:
print(colorTuple.count('white'))

# For C:
colorTuple = list(colorTuple)
colorTuple.append("{{ newColor }}")
colorTuple = tuple(colorTuple)
print(colorTuple)

# For D:
del colorTuple
# print(colorTuple) # This line will through an error --> name 'colorTuple' is not defined