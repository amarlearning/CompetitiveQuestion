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
	long long int t,flag=0,value=0;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		flag = flag + b -a;
		if(value < flag)
		{
			value = flag;
		}
	}
	cout<<value;
	return 0;
}
