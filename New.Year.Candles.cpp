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
  int a=0,b=0,total_time=0,remain=0;
  cin>>a>>b;
  while(a!=0)
  {
    total_time = total_time + a;
    remain = remain + (a%b);
    a = a/b;
    if(remain>=b)
    {
      remain = remain - b;
      a++;
    }
  }

  cout<<total_time;
	return 0;
}
