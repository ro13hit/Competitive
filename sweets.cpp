#include <bits/stdc++.h>

using namespace std;

main()
{
    int n,ans=0,val=INT_MAX;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int j=n-1;j==0;j--)
    {
        int t=min(val,a[j]);
        ans = t + ans;
        val = t-1;
        if(val<0)
        {
            val=0;
        }
    }
    cout << ans;
}
