file=open("st.txt")
e=0
sn=input("ENTER STUDENT NUMBER : ")
for line in file:
    a=line.split()
    if(a[0]==sn):
        sc=a[1]
        e+=1
if(e==0):
    print("NOT FOUND STUDENT NUMBER : ",sn)
else :
    print(sc)
file.close()
