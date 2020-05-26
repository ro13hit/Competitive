#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int g;
        cin >> g;
        for(int j=0;j<g;j++)
        {
            int i,n,q;
            cin >> i >> n >> q;
            if(i==q)
            {
                cout << (n/2) << endl;
            }
            else
            {
                cout << (n+1)/2 << endl;
            }
            
        }
    }
    return 0;
}
