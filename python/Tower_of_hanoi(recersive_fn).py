def move(s,start,des):
    if(s==1):
        print("block size ",s," move from ",start," to ",des)
        return
    temp=6-start-des
    move(s-1,start,temp)
    print("block size ",s," move from ",start," to ",des)
    move(s-1,temp,des)
start=1
des=3
move(int(input("size :")),start,des)
    
