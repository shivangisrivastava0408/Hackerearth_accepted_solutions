n=input()
l=[]
for w in range(2,n):
    l1=[]
    if n%w==0:
        p=n/w
    l.append(w)
    l.append(p)
min=l[0]+l[1]
for w in range(2,len(l),2):
    n=l[w]+l[w+1]
    if n<min:
        min=n
print min
    
    
