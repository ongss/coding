def prime(n,l):
    if(n==1):
        l[0]=True
        return 0
    for i in range(2,int(n**0.5+1)+1):
        if(n%i==0 and n!=i):
            l[0]=True
            break
        else:
            l[0]=False
l=[0]
a=int(input("Enter your number : "))
for i in range(1,a+1):
    prime(i,l)
    if(l[0]):
        print(i," isn't a prime number")
    else:
        print(i," is a prime number")

