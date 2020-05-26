#include<stdio.h>
void main()
{

    int i,data[4];
    int haming[7],h[7];
    printf("Enter 4 bit data:");
    for(i=0;i<4;i++)
    {
        scanf("%d",&data[i]);
    }
    haming[4]=data[3];
    haming[2]=data[2];
    haming[1]=data[1];
    haming[0]=data[0];
    if(haming[4]==1&&haming[2]==1&&haming[0]==1)
    {
        haming[6]=1;
    }
    else
    {
        haming[6]=0;
    }
    if(haming[4]==1&&haming[1]==1&&haming[0]==1)
    {
        haming[5]=1;
    }
    else
    {
        haming[5]=0;
    }
    if(haming[2]==1&&haming[1]==1&&haming[0]==1)
    {
        haming[3]=1;
    }
    else
    {
        haming[3]=0;
    }
    for(i=0;i<7;i++)
    {
        printf("%d",haming[i]);
    }
    printf("enter your hamming code:");
    for(i=0;i<7;i++)
    {
        scanf("%d",&c[i]);
    }

}
