s=raw_input()
n=input()
p=''
for w in s:
    if 'A'<=w<='V' or 'a'<=w<='v' or '1'<=w<='5':
        p+=chr(ord(w)+4)
    elif w=='W':
        p+='A'
    elif w=='X':
        p+='B'
    elif w=='Y':
        p+='C'
    elif w=='Z':
        p+='D'
    elif w=='w':
        p+='a'
    elif w=='x':
        p+='b'
    elif w=='y':
        p+='c'
    elif w=='z':
        p+='d'
    elif w=='6':
        p+='0'
    elif w=='7':
        p+='1'
    elif w=='8':
        p+='2'
    elif w=='9':
        p+='3'
    else:
        p+=w
print p
