#include <iostream>
#include <bits/stdc++.h>
#include <utility>
using namespace std;

struct p {
    int x, y;
    p() {}
    p(int x, int y)
        : x(x), y(y)
    {
    }
};

// Utility method to return square of x
int squarecal(int x)
{
    return x * x;
}

// Utility method to sort a, b, c; after this
// method a <= b <= c
void orderit(int& a, int& b, int& c)
{
    int copy[3];
    copy[0] = a;
    copy[1] = b;
    copy[2] = c;
    sort(copy, copy + 3);
    a = copy[0];
    b = copy[1];
    c = copy[2];
}

// Utility method to return Square of distance
// between two points
int DistSquare(p p1, p p2)
{
    return squarecal(p1.x - p2.x) + squarecal(p1.y - p2.y);
}


// Method to classify angle
string AClassification(int a, int b, int c)
{
    // by pythagoras theorem
   if (a + b == c)
        return "right";
return "no";
}

// Method to classify the triangle by sides and angles
string classifyTriangle(p p1, p p2, p p3)
{
    // Find squares of distances between points
    int a = DistSquare(p1, p2);
    int b = DistSquare(p1, p3);
    int c = DistSquare(p2, p3);

    // Sort all squares of distances in increasing order
    orderit(a, b, c);
    return AClassification(a, b, c) ;


}
long int n;
long int m;
int main()
{
    int t;
    scanf("%d",&t);//cin>>t;
    while(t--){

        scanf("%d",&n);//cin>>n;
        scanf("%d",&m);//cin>>m;
        long long int ax[n];
        long long int ay[m];
        for(int i=0;i<n;i++)scanf("%d",&ax[i]);//cin>>ax[i];
        for(int i=0;i<m;i++)scanf("%d",&ay[i]);//cin>>ay[i];
        int count=0;

       for(int i=0;i<n;i++){
           for(int j=i;j<n;j++){
               if((ax[i]>0 && ax[j]<0) ||(ax[i]<0 && ax[j]>0)|| ax[i]==ax[j]==0){
                 for(int x=0;x<m;x++){
                 p p1, p2, p3;
                 if(ax[i]!=ax[j]){
                 p1 = p(0, ax[i]);
                 p2 = p(0, ax[j]);
                 p3 = p(ay[x], 0);
                 if( classifyTriangle(p1, p2, p3)=="right")count++;

                 }
                 }
               }
           }

        }
       for(int i=0;i<m;i++){
           for(int j=i;j<m;j++){
               if((ay[i]>0 && ay[j]<0) ||(ay[i]<0 && ay[j]>0)|| ay[i]==ay[j]==0){
                 for(int x=0;x<n;x++){
                 p p1, p2, p3;
                 if(ax[i]!=ax[j]){
                 p1 = p(ay[i], 0);
                 p2 = p(ay[j], 0);
                 p3 = p(0, ax[x]);
                 if( classifyTriangle(p1, p2, p3)=="right")count++;

                 }
                 }
               }
           }

        }


       printf("%d\n",count);//cout<<count<<endl;



    }


    return 0;
}

