#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
	vector<int> A = {11,2,3,41};
	for(int x:A)
	{
		cout<<x;
		cout<<endl;
	}cout<<endl;
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(-1);
	s.insert(-10);
	for(int x:s)
        cout<<x<<" ";
    cout<<endl;

}
