#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,k,i,count=0,j;
	scanf("%d %d",&n,&k);

	int *a=malloc(sizeof(int) *n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(((a[i]+a[j])%k)==0)
		{
			count++;
		}
	}
}

	printf("%d",count);
	return 0;
}
