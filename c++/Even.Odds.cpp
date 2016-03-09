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
  static long long int n,k,mid=0;
  cin>>n>>k;
  if(n%2==1) {
    mid = (n/2)+1;
    if(k <= mid) {
        printf("%lld",2*(k-1)+1);
    } else {
      k = k - mid;
      printf("%lld",2*(k));
    }
  } else {
    mid = n/2;
    if(k<=mid) {
      printf("%lld",2*(k-1)+1);
    }
    else {
      k = k - mid;
      printf("%lld",2*(k));
    }
  }
	return 0;
}
