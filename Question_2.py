x=raw_input()
l=x.split(" ")
f=0
s=raw_input()
l1=s.split(" ")
for w in l1:
    if int(l[1])<=int(w)<=int(l[2]):
        continue
    else:
        f+=1
        print 'NO'
        break
if f==0:
    print 'YES'
    
    
