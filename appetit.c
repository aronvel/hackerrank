#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,k,i,charged,actual,sum=0;
	scanf("%d %d",&n,&k);
	
	int *a=malloc(sizeof(int) *n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&charged);
		for(i=0;i<n;i++)
	{
		sum+=a[i];
		
		}
	actual=sum-a[k];
	
	actual=actual/2;

	if(charged==actual)
	{
		printf("Bon Appetit");
	}
	else if(charged>actual)
	{
		printf("%d",charged-actual);
	}
		
	return 0;
}
