s=raw_input()
l=s.split(" ")
p=''
for w in range(int(l[1])):
    p+='9'
for w in range(int(l[1]),len(l[0])):
    p+=l[0][w]
print p
