#include<bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    int k=1;
    while(t--)
    {
        int n,trace=0,ro=0,co=0,i=0,j=0,s=0,sum=0;
        cin >> n;
        vector<int>r(n);
        vector<int>c(n);
        int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin >> a[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            trace=trace+a[i][i];
        }
        for(i=0;i<n;i++)
        {
            if(i==n-1)
            {
                i=-1;
                j++;
            }
            if(j==n)
            {
                break;
            }
        }
        i=0;
        for(j=0;j<n;j++)
        {

            if(j==n-1)
            {
                j=-1;
                i++;
            }
            if(i==n)
            {
                break;
            }
        }
        cout << "Case #" << k << ": " << trace << " " << ro << " " << co << endl;
        k++;
    }
}
