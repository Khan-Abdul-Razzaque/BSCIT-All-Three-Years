
#2-A. Write a function that takes a character and returns true if it is a vowel and false other wise.


def isVowel(ch):
    vowels = "aeiou"
    if ch in vowels:
        return True
    else:
        return False
print(isVowel("A".lower()))
    
