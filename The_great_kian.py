n=input()
s=raw_input()
l=s.split(" ")
s1=0
s2=0
s3=0
for w in range(0,n,3):
    s1+=int(l[w])
for w in range(1,n,3):
    s2+=int(l[w])
for w in range(2,n,3):
    s3+=int(l[w])
print s1,s2,s3

    
