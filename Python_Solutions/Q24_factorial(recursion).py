#Function for calulating the factorial
def factorial(x): 
    if x == 1 or x== 0 : #base/terimination condition
        return 1

    elif(x < 0) :
        print("Sorry, factorial does not exist for negative numbers")
    
    else:
        return (x * factorial(x-1)) #Recursive Call for function factorial

# main
num = int(input("Enter a Number :")) # To take input from the user (should be > = 0)
print("Factorial of", num, "is", factorial(num)) 
