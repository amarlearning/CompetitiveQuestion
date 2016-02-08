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
	int a[10][10],i,j,x,y;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j] == 1)
			{
				x = i;
				y = j;
			}
		}
	}
	printf("%d",(abs(3-x)+abs(3-y)));
	return 0;
}
