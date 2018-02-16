def su(n):
    if(n==1):
        return 1
    s=su(n-1)+n
    return s
    
print(su(int(input("GET N :"))))
