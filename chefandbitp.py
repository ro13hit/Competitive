def sol():
    X,Y,L,R=map(int,input().split())
    z=0
    z=X|Y if(X!=0 and Y!=0) else 0
    if z<=R:
        print(z)
    else:
        num=0
        maxn=1
        while num<=R or (X!=0 and Y!=0):
            num+=(X&1|Y&1)*maxn
            X=X//2
            Y=Y//2
            maxn*=2
        print(num)
for i in range(int(input())):
    sol()
