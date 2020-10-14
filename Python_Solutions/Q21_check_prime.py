# Function to check number is prime or not
def isPrime(num):
	if num > 1:  
   		for i in range(2, num): 
       			if (num % i) == 0: 
           			print(num, "is not a prime number") 
           			break
   			else: 
       				print(num, "is a prime number") 
  
	else: 
   		print(num, "is not a prime number")

# main
num = int(input("Enter a Number ")) # To take input from the user
isPrime(num)
