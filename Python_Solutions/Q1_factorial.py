num = int(input("Number : "))
factorial = 1
sum=0
if num < 0:
    print("Sorry, factorial does not exist for negative numbers")
elif num == 0:
    print("The factorial of 0 is 1")
else:
    for i in range(1,num + 1):
        factorial = factorial*i
    print("The factorial of",num,"is",factorial)
while(factorial!=0):
    r=factorial%10
    sum =sum+r
    factorial=factorial//10
print(f'sum of factorial of digits of a number is {sum}')
