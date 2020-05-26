#include<stdio.h>
main()
{
	int a[50],l=0,q=0,i,n,c=0;
	printf("Enter Total bits:");
		scanf("%d",&n);
	int b[n];
	printf("Enter bits without space\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
		l++;
	}
	for(i=0;i<=l;i++)
	{
		b[i]=a[i];
		if(a[i]==1)
		{
			if(a[i+1]==1)
			{
				c++;
			}
			else if(a[i+1]==0)
			{
				c=0;
			}
		}
		if(c==5)
		{
			b[i]=0;
		}
		
	}
	for(i=0;i<=q;i++)
	{
		printf("%d",b[i]);
	}
}
