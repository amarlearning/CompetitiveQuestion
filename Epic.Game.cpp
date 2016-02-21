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
int gcd(int a, int b)
{
	if(b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b , a%b);
	}
}
int main()
{
	int a,b,n,token=0,flag=0;
	scanf("%d%d%d",&a,&b,&n);
	while(1)
	{
		if(token == 0)
		{
			flag = gcd(a,n);
			n = n - flag;
			token = 1;
		}
		else
		{
			flag = gcd(b,n);
			n = n - flag;
			token = 0;
		}
		if(n <= 0)
		{
			break;
		}
	}
	if(token == 0)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}

// function gcd(a, b)
//     if b = 0
//        return a;
//     else
//        return gcd(b, a mod b);
