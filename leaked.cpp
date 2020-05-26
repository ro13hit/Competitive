#include <bits/stdc++.h>

using namespace std;

int main(){

    int t,i,j;
    cin >> t;
    while(t--)
    {
        vector<int>v;
        int n,m,k;
        cin >> n >> m >> k;
        int a[n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin >> a[i];
            }
            int max69=0;
            int s=a[0];
            for(j=1;j<m+1;j++)
            {
                if(count(a,a+m,j)>max69)
                {
                    max69=count(a,a+m,j);
                    s=j;
                }
            }
            v.push_back(s);
        }
        for(i=v.size()-1;i>=0;i--)
        {
            cout << v[i] << " ";
        }

    }
    return 0 ;
}
