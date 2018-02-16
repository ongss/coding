def prime(n):
    s=set()
    r=set()
    for i in range(2,n+1):
        s.add(i)
    for i in s:
        b=i
        if i not in r:
            while(b<=n+1):
                b+=i
                r.add(b)
    d=s-r
    return d
a=int(input("ENTER YOUR NUMBER : "))
print("".join(list(str(prime(a)))))     
b=input()
