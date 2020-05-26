#include<bits/stdc++.h>
using namespace std;
void bubblesort(int A[] , int n)
{
    int temp;
      for(int k = 0; k< n-1; k++) {
           // (n-k-1) is for ignoring comparisons of elements which have already been compared in earlier iterations

           for(int i = 0; i < n-k-1; i++) {
                  if(A[ i ] > A[ i+1] ) {
                       // here swapping of positions is being done.
                       temp = A[ i ];
                       A[ i ] = A[ i+1 ];
                       A[ i + 1] = temp ;
                   }
           }
     }
     cout << "Bubble Sort::" << endl;
     for(int j=0;j<n-1;j++)
     {
         cout << A[j] << " ";
     }
     cout << endl;
}
void selectionsort(int A[],int n)
{
     // temporary variable to store the position of minimum element

        int minimum;
        // reduces the effective size of the array by one in  each iteration.

        for(int i = 0; i < n-1 ; i++)  {

           // assuming first element to be minimum of the  unsorted array .
             minimum = i ;

          // gives the effective size of unsorted  array .

            for(int j = i+1; j < n ; j++ ) {
                if(A[ j ] < A[ minimum ])  {                //finds the minimum element
                minimum = j ;
                }
             }
          // putting minimum element on its proper position.
          swap ( A[ minimum ], A[ i ]) ;
        }
        cout << "Selection Sort:" << endl;
        for(int k=0;k<n-1;k++)
        {
            cout << A[k] << " ";
        }
        cout << endl;
}
main()
{
    int t;
    long number;
    string s;
    map<string,long>pbook;
    cin >> t;
    while(t--)
    {
        cin >> s >> number;
        pbook.insert(pair<string,long>(s,number));
    }
    while(cin >> s)
    {
        if(pbook.find(s)!=pbook.end())
        {
            cout << s << "=" << pbook.find(s)->second << endl;
        }
        else
        {
            cout << "Not Found" << endl;
        }
    }
}

