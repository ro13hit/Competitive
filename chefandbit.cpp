#include<bits/stdc++.h>

using namespace std;

int t;

main()
{
    cin >> t;
    while(t--)
    {
        long long int x,y,l,r,val=0;
        cin >> x >> y >> l >> r;
        if(x!=0 && y!=0)
        {
            val= x|y;
        }
        else
        {
            val=0;
        }
        if(val<=r)
        {
            cout << val << "\n";
        }
        else
        {
            int maxpoint=0;
            int m=1;
            while((m<=r) || (x!=0 && y!=0))
            {
                maxpoint+=(x&1|y&1)*m;
                x=x/2;
                y=y/2;
                m*=2;
            }
            cout << m << "\n";
        }
    }
}
