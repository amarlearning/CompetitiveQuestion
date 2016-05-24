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
	static int t,i,even=0,odd=0,x=0;
  static int eveni=0,oddi=0;
	scanf("%lld",&t);
	for(i=1;i<=t;i++) {
    scanf("%d",&x);
    if(x & 1) {odd++;oddi=i;}
    else {even++;eveni=i;}
  }
  if(odd==1) {printf("%d",oddi);}
  else {printf("%d",eveni);}
	return 0;
}
