st=input("Enter String")
r=st.split(" ")
c=[]
s=""
for a in r:
    d=list(a)
    d.reverse()
    for ele in d:
        s=s+ele
    c.append(s)
    s=""
alt=" ".join(c)
print(alt)
        
