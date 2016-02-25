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
int a[500000];
int main() 
{
	int n,k,i,cnt=0;
	cin>>n>>k;
	k=k-1;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>=a[k] && a[i]>0)
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
