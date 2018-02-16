a=input("GET STR : ")
x=[]
for i in range(0,10,1):
    if(str(i) not in a):
        x=x+[str(i)]
d=" ".join(x)
if(len(x)==0):
    print("THERE ARE MISSING NOT THING")
else:
    print("THE MISSING DIGIT NUMBER IS ",d)
