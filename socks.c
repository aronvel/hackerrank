#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j,count=0,temp;
	scanf("%d",&n);
	int *a=malloc(sizeof(int) *n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	

	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
	{
		while(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}
}

	for(i=0;i<n-1;i++)
	{
		if(a[i]=a[i+1])
			{
			count++;
			i++;
			}
	}

	printf("%d",count-1);

	return 0;
}
	
	
