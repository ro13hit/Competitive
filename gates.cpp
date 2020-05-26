#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n>> k;
        char a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int l = n-1, c=0;
        for(int i=0;i<k;i++){
            if(a[l] == 'H'){
                for(int j=l-1;j>=0;j--){
                    if(a[j] == 'H') a[j] = 'T';
                    else    a[j] = 'H';
                }
            }
            l--;
        }
        for(int i=0;i<n-k;i++)
            if(a[i] == 'H')
                c++;
        cout<<c<<endl;

    }
}
