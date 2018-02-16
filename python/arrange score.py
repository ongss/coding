file=open("st.txt")
a=[]
b=[]
for line in file:
    s=line.split()
    a+=[s[0]]
    b+=[s[1]]
for i in range(len(b)):
    for j in range(len(b)-1):
        if( float(b[j])>float(b[j+1])):
            a[j],a[j+1]=a[j+1],a[j]
            b[j],b[j+1]=b[j+1],b[j]
    
for i in range(len(a)):
    print(a[i] ,b[i])
file.close()
