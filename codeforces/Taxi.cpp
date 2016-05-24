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
int a[5]={0};
int main() 
{
	long long int n,i,taxi_needed=0,sum_3_and_1 = 0,sum_2_and_2 = 0,sum_of_1=0,req=0,use=0;
	int x;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		a[x]++;
	}
	taxi_needed = taxi_needed + a[4];
	if(a[3]>0)
	{
			if(a[3]>a[1])
			{
				taxi_needed = taxi_needed +a[1];
				a[3] = a[3]-a[1];
				a[1]=0;
				taxi_needed = taxi_needed + a[3];
				a[3]=0;
			}
			else
			{
				taxi_needed = taxi_needed + a[3];
				a[1] = a[1] - a[3];
				a[3] = 0;
			}
	}
	if(a[2]>0)
	{
		if(a[2]%2==0)
		{
			taxi_needed = taxi_needed + a[2]/2;
		}
		else
		{
			if(a[2] == 1)
			{
				a[2] = 1;
				req = 101;
			}
			else
			{
				taxi_needed = taxi_needed + a[2]/2;
				a[2] = 1;
				req = 101;
			}
		}
	}
	if(a[1]>0)
	{
		if(req == 101)
		{
			taxi_needed++;
			a[1] = a[1]-2;
		}
		if(a[1]>0)
		{
			taxi_needed = taxi_needed + a[1]/4;
			if(a[1]%4 == 0)
			{
				use = 1;
			}
			else
			{
				taxi_needed++;

			}
		}
	}
	else
	{
		if(req == 101)
		{
			taxi_needed++;
		}
	}
	cout<<taxi_needed;
	return 0;
}
