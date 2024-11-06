# Write a program to demonstrate polymorphism

class Polymorphism:
    def add(self, a = None, b = None, c = None):
        X = 0
        if a != None and b != None and c != None:
            X = a + b + c
        elif a != None and b != None and c == None:
            X = a + b
        return X

obj = Polymorphism()
print(obj.add(4, 7, 8))
print(obj.add(23, 34))