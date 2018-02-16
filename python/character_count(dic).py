count={}
txt=input("GET TEXT : ")
for i in range(len(txt)):
    if(txt[i] in count):
        count[txt[i]]=count[txt[i]]+1
    else:
        a={txt[i]:1}
        count.update(a)
b=count.keys()
for i in b:
    print(i," = ",count[i])

