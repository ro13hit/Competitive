#include<iostream>
using namespace std;
main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n,k;
        cin >> n >> k;
        char coin[n];
        for(int i=0;i<n;i++)
        {
            cin >> coin[i];
        }
        int l=n-1,c=0;
        for(int i=0;i<k;i++)
        {
            if(coin[l]=='H')
        {
            for(int j=l-1;j>=0;j++)
            {
                if(coin[j]=='H')
                {
                    coin[j]='T';
                }
                else
                {
                    coin[j]='H';
                }
            }
        }
        l--;
        for(int i=0;i<n-k;i++)
        {
            if(coin[i]=='H')
            {
                c++;
            }
        }
        cout << c << endl;
    }
}
}
