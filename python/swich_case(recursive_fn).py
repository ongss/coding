def fac(n):
    if(n==1):
        lis=[]
        lis=list([[arr[n-1]],])
        return lis
    nlis=[]
    mlis=[]
    lis=fac(n-1)
    for i in range(n-1):
        mlis=[]
        for j in range(n):
            mlis+=[lis[i],]
        nlis+=mlis
    lis=list(nlis)
    #print(lis)
    mlis=[]
    u=0
    for i in range(n-1):
        for j in range(n):
            nlis=list(lis[u])
            #print(nlis)
            nlis[j:j]=arr[n-1]
            mlis+=[nlis]
            u+=1
    return mlis
n=int(input("Enter your n :"))
arr=["1","2","3","4","5"]
print(fac(n))
                
