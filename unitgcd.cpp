#include<bits/stdc++.h>
using namespace std;
int i=0,t,n,e=0,days=1,cnt=0;

bool coprime(int a, int b)
{
    return (__gcd(a, b) == 1);
}

int main()
{
    cin >> t;
    vector<int>p;
    while(t--)
    {
        cin >> n;
        for(i=1;i<=n;i++)
        {
            p.push_back(i);
            if(i%2==0)
            {
                e++;
            }
        }
        if(e>0)
        {
            days = e;
        }
        cout << days << endl;
        for(int y : p)
        {

        }
    }
    return 0;
}
