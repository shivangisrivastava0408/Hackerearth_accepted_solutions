n=input()
s=raw_input()
l=s.split(" ")
max=int(l[0])
min=int(l[0])
for w in range(len(l)):
    if int(l[w])>max:
        max=int(l[w])
for w in range(len(l)):
    if int(l[w])<min:
        min=int(l[w])
f=0
for w in range(min,max+1):
        for i in range(n):
            if l[i]==w:
                f+=1
                continue
        else:
            print 'NO'
            break
if f==n:
    print 'YES'

