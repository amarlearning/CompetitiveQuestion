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
	static int a,b,c,total;
  scanf("%d%d%d",&a,&b,&c);
  if(a == 1 && b == 1 && c == 1) {
    total = 3;
  }
  else if(a==1 && c==1)
  {
    total = a+b+c;
  }
  else if(a == 1) {
    b = b+a;
    total = b*c;
  }
  else if(b == 1) {
    if(a<=c) {
      a=a+b;
    }
    else
    {
      c = c+b;
    }
    total = a*c;
  }
  else if(c == 1) {
    b = b+c;
    total = a*b;
  }
  else
  {
    total=a*b*c;
  }
  printf("%d",total);
	return 0;
}
