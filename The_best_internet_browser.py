t=input()
for w in range(t):
    s=raw_input()
    f=0
    for k in range(4,len(s)):
        if s[k] in ['a','e','i','o','u']:
            f+=1
    g=len(s)-3-f
    print str(g)+"/"+str(len(s))
