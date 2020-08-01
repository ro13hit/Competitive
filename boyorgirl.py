def sol():
    name=list(input())
    d=1
    l=sorted(name)
    for i in range(0,len(l)-1):
        if l[i]!=l[i+1]:
            d+=1
    if (d)%2==1:
        print("IGNORE HIM!")
    else:
        print("CHAT WITH HER!")
sol()
