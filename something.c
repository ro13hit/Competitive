#include<stdio.h>

struct p {
    int x, y;
    p() {}
    p(int x, int y)
        : x(x), y(y)
    {
    }
};

// Utility method to return square of x
int squarec(int x)
{
    return x * x;
}

// Utility method to sort a, b, c; after this
// method a <= b <= c
void ordr(int& a, int& b, int& c)
{
    int arr8[3];
    arr8[0] = a;
    arr8[1] = b;
    arr8[2] = c;
    sort(arr8, arr8 + 3);
    a = arr8[0];
    b = arr8[1];
    c = arr8[2];
}

// Utility method to return Square of distance
// between two points
int DistSquare(p p1, p p2)
{
    return squarec(p1.x - p2.x) + squarec(p1.y - p2.y);
}


// Method to classify angle
string Classification(int a, int b, int c)
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
    ordr(a, b, c);
    return Classification(a, b, c) ;


}
int main()
{
    int ca;
    scanf("%d",&ca);
    while(ca--){
        long int n;
        long int m;
        scanf("%d",&n);
        scanf("%d",&m)
        long long int ax[n];
        long long int ay[m];
        for(int i=0;i<n;i++)scanf("%d",&ax[i]);
        for(int i=0;i<m;i++)scanf("%d",&ay[i]);
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
                 point p1, p2, p3;
                 if(ax[i]!=ax[j]){
                 p1 = point(ay[i], 0);
                 p2 = point(ay[j], 0);
                 p3 = point(0, ax[x]);
                 if( classifyTriangle(p1, p2, p3)=="right")count++;

                 }
                 }
               }
           }

        }


       printf("%d\n",count);



    }


    return 0;
}
