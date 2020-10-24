arr = list([])

n = int(input("Enter no. of Elements"))

for i in range(n):
    x = int(input("Enter an element"))
    arr.append(x)

a = int(input("Enter No. you Want to search"))
c=0
for e in arr:
    if e == a:
        c+=1
        break

if c == 1:
    print("Found")
else:
    print("Not Found")
