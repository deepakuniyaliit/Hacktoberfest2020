# Recursive Python  program to find maximum number in an array
def findMaxRec(A, n):
    if (n == 1):
        return A[0]
    return max(A[n - 1], findMaxRec(A, n - 1))#Recursive Call for function 

# Driver Code
A = [1, 4, 45, 6, -50, 10, 2]
n = len(A)
print(findMaxRec(A, n))
#code is contributed by sparsh kishore