#include<set>
#include<algorithm>
#include<iostream>
#include<utility>
#include<map>
using namespace std;
void vectortry()
{
    int x=0;
    vector<int>a={};
    for(int i=0;i<=10;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    vector<int>::iterator it3;
    for(it3=a.begin();it3!=a.end();it3++)
    {
        cout << *it3 << " ";
    }
    bool present = binary_search(a.begin(),a.end(),12);
    present=binary_search(a.begin(),a.end(),169);
    vector<int>::iterator it = lower_bound(a.begin(),a.end(),10); // >=
    vector<int>::iterator it2 = upper_bound(a.begin(),a.end(),6); // >
    cout << endl << *it << " " << *it2 << endl;
    for(int &y: a)
    {
        y++;
    }
    for(int y : a)
    {
        cout << a[y] << " ";
    }
}
void settry()
{
    set<int> S;
    S.insert(1);
    S.insert(2);
    S.insert(3);
    S.insert(4);S.insert(5);S.insert(-10);
    for(int z:S)
    {
        cout << z << " ";
    }
    auto it = S.find(5);
    cout << *it << endl;
}
void maptry()
{
    set<int>A={1,2,3,5,6,7,8,99};
    for(int x : A)
    {
       cout << x << " ";
    }
    cout << endl;
    vector<int>S={1,23,45,0,3,4,6};
    for(int &y : S)
    {
        cout << y << " ";
    }
    cout << endl;
    map<int,char> cnt;
    string n ="rohit garg is not ok";
    for(char c : n)
    {
        cnt[c]++;
    }
    cout << cnt['a'] << " " << cnt['z'] << endl;
    cout << n;
    cout << "I am done with u \n";
}
void pairtry()
{

}
main()
{
    vectortry();
    settry();
    maptry();
}
