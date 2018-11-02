t=input()
for w in range(t):
    str=raw_input()
    f=0
    l= str.split(" ")
    p=len(l[0])
    l1=list(l[0])
    l2=list(l[1])
    if len(l[0])!=len(l[1]):
        print 'NO'
    else:
        for w in l[0]:
            if w in l[1]:
                f+=1
                l1.remove(w);
                l2.remove(w);
                continue
            else:
                print 'NO'
                break
    if f==p:
        print 'YES'
