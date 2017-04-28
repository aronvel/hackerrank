#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s,t,a,b,m,n,count=0,count1=0,i,j;

	scanf("%d %d",&s,&t);
	scanf("%d %d",&a,&b);
	scanf("%d %d",&m,&n);

	int *app=malloc(sizeof(int)*m);
	int *app1=malloc(sizeof(int)*m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&app[i]);
	}
	int *ora=malloc(sizeof(int)*n);
	int *ora1=malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&ora[i]);
	}
	
	/*for(i=0;i<m;i++)
	{
		printf("\n%d %d",app[i],ora[i]);
	}*/
	
	for(i=0;i<m;i++)
	{
		app1[i]=a+app[i];
		
	}

	for(i=0;i<m;i++)
	{
		if(app1[i]>=s && app1[i]<=t)
		{
			count++;
		}
	}
	for(j=0;j<n;j++)
	{
		ora1[j]=b+ora[j];
		
	}
	for(j=0;j<n;j++)
	{
		if(ora1[j]>=s && ora1[j]<=t)
		{
			count1++;
		}
	}
	printf("%d\n%d",count,count1);
	return 0;
}
