def main():
    n= int(input())
    a = list(map(int,input().split()))
    b,c,cnt = 0,0,0
    for i in range(n):
        if a[i]>a[i-1]:
            b+=1
            c=0
            
            if b == 4:
                b =0
                cnt+=1
        elif a[i]<a[i-1]:
            c+=1
            b=0
            
            if c ==4:
                c = 0
                cnt+=1
    return cnt

try:    
    for test in range(1,int(input())+1):
        print("Case #{}: {}".format(test,main()))

except:
    pass
