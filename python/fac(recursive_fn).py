def fac(n):
    if(n==1):
        return 1
    a=fac(n-1)*n
    return a

print(fac(int(input("GET N FOR N FAC :"))))
