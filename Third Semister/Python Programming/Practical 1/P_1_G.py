x = input("Enter a string: ")
y = input("Enter a character to check its occurence in the string: ")
count = 0
for i in x:
    if i.lower() == y.lower():
        count += 1

print(f"The character {y} occurs {count} times in the string {x}")