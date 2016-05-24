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
	long long int t,a=0,b=0,c=0,cnt=0,result=0;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(a == 1)
		{
			cnt++;
		}
		if(b == 1)
		{
			cnt++;
		}
		if(c == 1)
		{
			cnt++;
		}
		if(cnt>=2)
		{
			result++;
		}
		cnt=0;
	}
	cout<<result;
	return 0;
}
