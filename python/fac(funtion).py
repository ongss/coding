def fac(n):
    k=1
    for i in range(1,n+1):
        k*=i
    return k

k=int(input())
print(fac(k))
