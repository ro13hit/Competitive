''' Read input from STDIN. Print your output to STDOUT '''
    #Use input() to read input from STDIN and use print to write your output to STDOUT

def main():
    n=int(input())
    for i in range(n):
        x=input() 
        l1=[] 
        c=0 
        d=0 
        for j in x:
            if j.isalpha()==True:
                if j=='a' or j=='e' or j=='i' or j=='o' or j=='u':
                    c=c+1
                else:
                    d=d+1
        print(c,d,c*d)
main()

