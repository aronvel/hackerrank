#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[200][200],i,j,k,sum=0,sum1=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(i==j)
			{
				sum+=a[i][j];
			
			}
	
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=0;j<k;j++)
		{
			if(i+j==k-1)
			{
				sum1+=a[i][j];

			}
		}
	}


	printf("%d",abs(sum-sum1));
	return 0;
}
	
