a, b = map(int,input().split())
c=0
while(a%2==0):
    a=a/2
    c=c+1
if(c==0):
    print(0)
else:
    l=[]
    i=0
    while(c):
        l.extend(range(2**i,b+1,2**(i+1)))
        i=i+1
        c=c-1
    l = list(set(l))
    l.sort()
    if(l==[]):
        print(0)
    else:
        print(len(l),' '.join([str(j) for j in l]),sep='\n')
