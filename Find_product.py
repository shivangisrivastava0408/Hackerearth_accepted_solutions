n=input()
s=raw_input()
p=1
l=s.split(" ")
for w in l:
    p=p*int(w)
print p%1000000007
