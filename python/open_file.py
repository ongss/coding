file=open("a.txt")
out=open("b.txt","w")
for line in file:
    print(line.strip().upper())
    out.write(line.upper())
out.close()
file.close()
