#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n,best=0,worst=0,c,i;
	scanf("%d",&n);
	
	int *s=malloc(sizeof(int)* n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}

	c=s[0];

	for(i=1;i<n;i++)
	{
		if(s[i]>c)
		{
			best++;
			c=s[i];
		}
	}
	
	c=s[0];
	for(i=1;i<n;i++)
	{
		if(s[i]<c)
		{
			worst++;
			c=s[i];
		}
	}
		
	printf("%d %d",best,worst);
	
	return 0;
}
