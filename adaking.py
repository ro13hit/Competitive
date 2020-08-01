def sol():
    l=[[0]*8]*8
    for i in range(1,9):
        for j in range(1,9):
            l[i][j]=-1
    k = int(input())
    c=0
    for i in range(1,10):
        for j in range(1,9):
            l[i][j]=1
            c+=1
            if c==k:
                break
        if c==k:
            break
    print('O',end='')
    for i in range(1,9):
        for j in range(1,9):
            if(not(i==1 and j==1)):
                if l[i][j]==(-1):
                    print('X',end='')
                else:
                    print('.',end='')
        print()
    print()
for _ in range(int(input())):
    sol()
    
