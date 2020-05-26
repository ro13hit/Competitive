#include<bits/stdc++.h>

using namespace std;

long int t,n,cnt1=0,cnt2=0,z=0;

int main()
{
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n];
        for(long int i=0;i<n;i++)
        {
            long int z;
            cin >> z;
            if(z<0)
            {
                a[i]=(-1)*z;
            }
            else{
                a[i]=z;
            }
        }
        for(long int j=0;j<n;j++)
        {
            if(j!=0 && j!=n-1)
                if(a[j]%4==2)
                {
                    if(a[j-1]%4!=0)
                        cnt1++;
                    if(a[j+1]%4!=0)
                        cnt2++;
                }
            else
                if(a[j]%4!=0)
            {
                cnt1++;
            }
        }
        long int ans=((n*(n+1))/2)-(cnt1*cnt2);
        cout << ans << endl;
        cnt1=0;
        cnt2=0;
    }
    return 0;
}
