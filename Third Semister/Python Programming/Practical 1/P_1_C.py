number = int(input("How many terms of fibonacci series you want to pirnt: "))
f0 = -1
f1 = 1

print(f"\nHere's the {number} terms of fibonacci series:\n")
for i in range(number):
    fn = f0 + f1
    f0 = f1
    f1 = fn
    print(fn)