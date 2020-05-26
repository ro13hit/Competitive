#include<bits/stdc++.h>
using namespace std;

int t,n,sum=0,i;
int main()
{
    cin >> t;
    while(t--)
    {

        cin >> n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for(i=n-1;i>-1;i--)
        {
            if(a[i]-(n-i-1)>0)
            {
                sum=sum+(a[i]-(n-i-1));
            }
        }
        cout << (sum%100000007) << endl;
        sum=0;
    }
    return 0;
}
