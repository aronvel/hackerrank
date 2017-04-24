#include<stdio.h>

void main()
{
	int a[3],b[3],alice=0,bob=0,flag=0;
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<3;i++)
	{
		scanf("%d",&b[i]);
	}

	for(i=0;i<3;i++)
	{
				
		if(a[i]>b[i])
			{
				alice++;
				continue;
			}
		 if(a[i]==b[i])
			{
				flag=1;
				continue;
			}
		 if(a[i]<b[i])
			{
				bob++;
				continue;
			}
	}	
	
	
	printf("\n%d %d",alice,bob);
}
