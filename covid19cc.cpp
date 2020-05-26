#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,x=0;
    cin >> t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>p;
        for(int i=0;i<N;i++)
        {
            int x;
            cin >> x;
            p.push_back(x);
        }
        vector<int>l;
        int inf=1;
        for(int j=0;j<N-1;j++)
        {
            if(p[j+1]-p[j]<=2)
            {
                inf++;
            }
            else
            {
                l.push_back(inf);
                inf=1;
            }
            if(j==N-2)
            {
                l.push_back(inf);
            }
        }
        cout << *min_element(l.begin(),l.end()) << " " << *max_element(l.begin(),l.end()) << "\n";
    }
    return 0;
}
