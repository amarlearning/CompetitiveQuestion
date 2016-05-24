#include <string.h>
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
	int t=0,i=0,coins=0;
	long long int sum=0,eamount=0,pick=0;
	std::cin >> t;
	for(i=0;i<t;i++)
	{
		std::cin >> a[i];
		sum = sum + a[i];
	}
	eamount = sum/2+1;
	sort(a+0,a+t);
	i = t-1;
	while(pick<eamount && i>=0)
	{
		pick = pick + a[i];
		coins++;
		i--;
	}
	std::cout << coins << std::endl;
	return 0;
}
