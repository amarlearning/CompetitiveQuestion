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
	long long int n,cnt=0,i=1,flag=0;
	scanf("%lld",&n);
	while(cnt<n) {
		cnt = cnt + (i*(i+1)/2);
		i++;if(cnt<=n) {flag=flag+1;}
	}
	printf("%d",flag);
	return 0;
}
