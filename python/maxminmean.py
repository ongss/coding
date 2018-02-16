file=open("a.txt")
a=0
b=0
mx=0
mn=0
for line in file:
    line=line.strip()
    c=float(line[len(line)-4:len(line)])
    print(c)
    a=a+c
    if(b==0):
        mx=c
        mn=c
    else:
        if(c<mn):
            mn=c
        if(c>mx):
            mx=c
    b+=1
print("max is",mx)
print("min is",mn)
print("mean is",a/b)
file.close()

