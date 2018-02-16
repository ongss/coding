chab="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
chas="abcdefghijklmnopqrstuvwxyz"
txt=input("TXT :")
ntxt=""
for i in txt:
    if(i in chab):
        a=chab.find(i)
        a+=13
        if(a>23):
            a-=24
        ntxt+=chab[a]
    elif(i in chas):
        a=chas.find(i)
        a+=13
        if(a>23):
            a-=24
        ntxt+=chas[a]
    else:
        ntxt+=i
print(ntxt)
        
    
