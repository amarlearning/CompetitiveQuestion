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
static long long int a[500000];
int main() {
	static long long int n,i,k,z;
  long long int start = 1;
	scanf("%lld%lld",&n,&k);
  for(i=1;i<n;i++) {
    scanf("%d",&a[i]);
  }
  while(start < k)
  {
    start = start + a[start];
    if(start == k){z = 1;}
  }
  if(z == 1) {printf("YES");}
  else {printf("NO");}
	return 0;
}
