#include <string.h>
#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <list>
#include <ctime>
#include <memory.h>
#include <ctime>
#include <assert.h>
#define pi 3.14159
#define mod 1000000007
using namespace std;
long long int a[500000];
int main()
{
	long long int n;
	scanf("%lld",&n);
	if(n>0 && n<=10)
	{
		if(n%4==0 || n%7==0)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	else if(n>10 && n<=100)
	{
		if(n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%4==0 || n%7==0)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	else if(n>100 && n<=1000)
	{
		if(n%444==0 || n%447==0 || n%474==0 || n%477==0 || n%744==0 || n%747==0 || n%774==0 || n%777==0 || n%44==0 || n%47==0 || n%74==0 || n%77==0 || n%4==0 || n%7==0)
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	else
	{
		printf("NO");
	}
	return 0;
}
