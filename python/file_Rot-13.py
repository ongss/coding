fn=input("ENTER YOUR FILE NAME : ")
fn=fn+".txt"
nfn="new_"+fn
ntxt=""
txt=open(fn)
index="ABCDEFGHIJKLMNOPQRSTUVEXYZ"
smindex="abcdefghijklmnopqrstuvwxyz"
for line in txt:
    line=line.strip()
    for i in line:
        if(i in index):
            i=index.find(i)
            i+=13;
            if (i>23):
                i-=24
            ntxt+=index[i]
        elif(i in smindex):
            i=smindex.find(i)
            i+=13
            if (i>23):
                    i-=24
            ntxt+=smindex[i]
        else:
            ntxt+=i
    ntxt+="\n"
print(ntxt)
txt.close()
