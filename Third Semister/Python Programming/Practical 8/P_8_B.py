# WAP to accept email it from the user and check wether emial id is valid or not.

import re
email=str(input("enter your email"))
res=re.search(r"^[a-z]\w{8,20}@[a-z]{3,6}.[a-z]{2,3}$",email)
if (res):
    print("vaild email")
else:
    print("invaild eamil")