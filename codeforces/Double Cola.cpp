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
  long long int n,power=1,z=0;
  scanf("%lld",&n);
  while(n > power * 5)
  {
    n = n - power*5;
    power = power * 2;
  }
  z = (n-1)/power;
  if(z == 0)
  {
    printf("Sheldon");
  }
  else if (z == 1)
  {
    printf("Leonard");
  }
  else if (z == 2)
  {
    printf("Penny");
  }
  else if (z == 3)
  {
    printf("Rajesh");
  }
  else
  {
    printf("Howard");
  }
	return 0;
}
