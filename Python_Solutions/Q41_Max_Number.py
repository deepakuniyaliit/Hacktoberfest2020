#Maximum number from an array


#importing Numpy 
from numpy import *

#importing array
from array import *


n=int(input("Enter the size"))
arr=array('i',[])
for i in range(n):
    x=int(input("Enter An element"))
    arr.append(x)

#maximum number is initially 0
m=0

#checking each number with the maximum number
for i in arr:
    if i>m:
        m=i

print(m)
print("max is",max(arr))
