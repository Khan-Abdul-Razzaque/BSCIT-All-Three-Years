# Question: Create the tuple to store names of the student. Write a program to accept student name from the user & check whether that student name is present in that tuple or not.

nameTuple = ('Razzaque', "Irshad", 'Arshad', "Minhaz", 'Zishan', 'Gulzar', 'Ashfaque', 'Iqram', 'Danish', 'Shaihid', 'Abrar')
userName = input("Enter the name: ")
nameFound = False
for name in nameTuple:
    if name.lower() == userName.lower():
        nameFound = True
        break

if nameFound:
    print(f"The name '{userName}' is present in the tuple.")
else:
    print(f"The name '{userName}' is not present in the tuple.")