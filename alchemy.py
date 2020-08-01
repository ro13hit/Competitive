def sol():
    n = int(input())
    s = input()
    cnt = 0
    for j in s:
        if j=='A':
            cnt+=1
        else:
            cnt-=1
    if cnt ==1 or cnt == -1:
        return 'Y'
    else:
        return 'N'

    
for i in range(1,int(input())+1):
    print("Case #{}: {}".format(i,sol()))
