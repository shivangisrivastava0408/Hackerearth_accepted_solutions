l=[]
p=''
n=raw_input()
for w in n:
    l.append(w)
for w in range(len(l)-1,-1,-1):
    p+=l[w]
print p
