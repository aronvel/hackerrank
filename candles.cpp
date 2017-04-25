#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	long long n,max;
	int i,count=0;
	cin>>n;
	long long a[n];
	
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	sort(a,a+n);
	max=a[n-1];
	for(i=0;i<n;i++)
	{
		if(a[i]==max)
		count++;
	}

	cout<<count;
	return 0;
}
