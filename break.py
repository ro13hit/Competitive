try:
    T,S=map(int,input().split())
    c=0
    if(S==1):
        for i in range(T):
            N=int(input())
            a=list(map(int,input().split()))
            b=list(map(int,input().split()))
            x=sorted(a)
            y=sorted(b)
            if(x[0]<y[0]):
                for i in range(1,N):
                    if(x[i]==x[i-1] or x[i] in y):
                        continue
                    else:
                        c+=1
                        break
            else:
                c+=1
            if(c>=1):
                print("NO")
            else:
                print("YES")

except:
    pass
