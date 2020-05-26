#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,k;
        cin >> x >> k;
        int c=x;
        int pr=0;
        if(x>=k)
        {
            if(k==1)
            {
                if(x>=2)
                {
                    pr=1;
                }
            }
            else
            {
                int s=0;
                for(int i=2;i*i<=x;i++)
                {
                    if(x%i==0)
                    {
                        s=1;
                        break;
                    }
                }
                if(s==1)
                {
                    int v=0;
                    for(int i=2;i*i<=x;i++)
                    {
                        while(x%i==0)
                        {
                            v++;
                            x=x/i;
                        }
                    }
                    if(x>2)
                    {
                        v++;
                    }
                    if(v>=k)
                    {
                        pr=1;
                    }
                }
            }
        }
        cout << pr << endl;
    }
}
