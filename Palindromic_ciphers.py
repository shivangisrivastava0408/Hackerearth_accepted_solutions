t=input()
for w in range(t):
    s=''
    d=raw_input()
    for i in range(len(d)-1,-1,-1):
        s+=d[i]
    if s==d:
        print 'Palindrome'
    else:
        p=1
        for k in s:
            p=p*(ord(k)-96)
        print p
