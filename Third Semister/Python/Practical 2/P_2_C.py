
#2-C. Define a fucntion histogram() that takes list  of integers and print a histogram on the screen.

def histogram(integers):
    for i in integers:
        print("*"*i)
    
histogram([3, 2, 1, 4, 8, 6, 10])