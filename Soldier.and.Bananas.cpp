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
	long long int k,n,w;
  unsigned long long int calc = 0;
  scanf("%lld%lld%lld",&k,&n,&w);
  calc = (w * (w + 1))/2;
  calc = calc * k;
  if(calc > n)
  {
    calc = calc - n;
    printf("%llu",calc);
  }
  else
  {
    printf("0");
  }
	return 0;
}
