n=input()
s=raw_input()
l=s.split(" ")
f=0
for i in range(n):
    for w in range(n-i-1):
        if l[w]>l[w+1]:
            l[w],l[w+1]=l[w+1],l[w]
            f+=1
print f
