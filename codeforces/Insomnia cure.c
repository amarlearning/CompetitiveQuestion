#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
long long int a[100002]={0};
int main()
{
	long int k,l,m,n,d,i,cnt=0;
	scanf("%ld%ld%ld%ld%ld",&k,&l,&m,&n,&d);
	for(i=1;i<=d;i++)
	{
		if(i%k == 0 && a[i]==0)
		{
			a[i]=1;
		}
		if(i%l == 0 && a[i]==0)
		{
			a[i]=1;
		}
		if(i%m == 0 && a[i]==0)
		{
			a[i]=1;
		}
		if(i%n == 0 && a[i]==0)
		{
			a[i]=1;
		}
	}
	for(i=1;i<=d;i++)
	{
		if(a[i] == 1)
		{
			cnt++;
		}
	}
	printf("%ld",cnt);
	return 0;
}
