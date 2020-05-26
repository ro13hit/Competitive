#include<iostream>
using namespace std;
main()
{
    int T,e=0,o=0;
    long n,q,p;
    long a[1000];
    cin>>T;
    while(T!=0)
    {
        cin>>n>>q;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            for(int j=0;j<q;j++)
            {
                cin>>p;
                for(int k=0;k<n;k++)
                {
                    if(p%2==0)
                    {
                        if(a[k]%2==0)
                        {
                            e++;
                        }
                        else
                        {
                            o++;
                        }
                    }
                    else
                    {
                        if(a[k]%2==0)
                        {
                            o++;
                        }
                        else
                        {
                            e++;
                        }
                    }
                }
                cout<<e<<o;
            }
        }
        T--;
    }
}
