#include<stdio.h>


int main()
{
	int n,a[70],i,j;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(j=0;j<n;j++)
{

	for(i=0;i<100;i++)
	{
	
		if(a[j]>37){
		if(((a[j]+i)%5==0) && (i<3))
		{
			a[j]=a[j]+i;
		
		}
}
		
	}
}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
