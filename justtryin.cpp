#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
    
	long long int n;
	cin>>n;
	vector<long long int>arr(n);
	for(long long int i=0;i<n;i++)cin>>arr[i];
	sort(arr.begin(),arr.end());
	long long int k=arr.size();
	for(long long int i=0;i<n;i++)
	{
	    arr[i]=arr[i]*k;
	    k--;
	}
	cout<<*max_element(arr.begin(),arr.end())<<endl;
	return 0;
}
