#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<cstdio>

using namespace std;

int main()
{
	long long a[5];
	long long sum=0;
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	
	sort(a,a+5);

	cout<<sum-a[4]<<" "<<sum-a[0];
	return 0;
}
