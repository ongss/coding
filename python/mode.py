data=[]
a=int(input(" N : "))
n=0
m=0
for i in range(0,a,1):
    data+=[int(input("get x : "))]
for i in data:
    for j in range(len(data)):
        if(j==i):
            n+=1
    if(n>m):
        m=n
        mode=i
    n=0
print(mode)
