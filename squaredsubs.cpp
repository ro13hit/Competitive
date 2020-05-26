#include<bits/stdc++.h>

typedef long int ll;

using namespace std;

ll t,n,z=0;


int main()
{
    cin >> t;
    while (t--)
    {
        ll cnt=0;
        ll product=1;
        cin >> n;
        if(n<0)
            n=n*(-1);
        ll a[n];
        for (ll i=0; i<n;i++)
        {
            cin >> z;
            if(z<0)
            {
                a[i]=(-1)*z;
            }
            else{
                a[i]=z;
            }
        }
        for (ll i=0;i<n;i++)
        {
            if (a[i]%4!=2)cnt++;
            product=a[i];
            for(ll j=i+1;j<n;j++)
            {
                product=product*a[j];
                if(product%4!=2)cnt++;
            }
            product=1;
        }
        cout << cnt << endl;
    }
    return 0;
}
