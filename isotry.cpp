#include<bits/stdc++.h>

using namespace std;

int t;

void trytosolve()
{
    int N,Q;
    cin >> N >> Q;
    array<int,26>ar={0};
    array<int,26>acopy;
    for(int i=0;i<N;i++)
    {
        char c;
        cin >> c;
        ar[c-'a']++;
    }
    acopy=ar;
    for(int j=0;j<Q;j++)
    {
        long long query;
        cin >> query;
        for(int k=0;k<26;k++)
        {
            ar[k]-=ar[k]>query?query:ar[k];
        }
        cout << accumulate(ar.begin(),ar.end(),0) << "\n";
        ar=acopy;
    }
}

int main()
{
   cin >> t;
   while(t--)
   {
       trytosolve();
   }
   return 0;
}
