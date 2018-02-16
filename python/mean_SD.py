data=[]
sum=0
sigma=0
a=int(input("N : "))
for i in range(0,a,1):
    data+=[int(input("Get x : "))]
for i in data:
    sum+=i
mean=sum/len(data)
for i in data:
    sigma+=(i-mean)**2
SD=(sigma/len(data))**0.5
print(mean,SD)

