#include<bits/stdc++.h>
using namespace std;
int main()
{
    //no endl w'll use \n :D
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t,i=0;
    cin >> t;
    while(t--)
    {
        //binet's formula for fibonacci f(n)=((1+root(5))^n-(1-root(5))^n)/(2^nroot(5))
        cout << (((1+sqrt(5))^i)-((1-sqrt(5))^i))/((2^i)*sqrt(5)) << "\n";
    }
}