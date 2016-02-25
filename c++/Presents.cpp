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
int main()
{
	long long int t,a[101],b[101],i;
	scanf("%lld",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%lld",&a[i]);
	}
	for(i=1;i<=t;i++)
	{
		b[a[i]]=i;
	}
	for(i=1;i<=t;i++)
	{
		printf("%lld ",b[i]);
	}
	return 0;
}
