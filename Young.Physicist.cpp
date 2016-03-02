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
	static int n,x,y,z,i;
  static int totalx,totaly,totalz;
  scanf("%d",&n);
  for(i=1;i<=n;i++) {
    scanf("%d%d%d",&x,&y,&z);
    totalx = totalx + x;
    totaly = totaly + y;
    totalz = totalz + z;
  }
  if(totalx == 0 && totaly == 0 && totalz == 0) {
    printf("YES");
  }
  else {printf("NO");}
	return 0;
}
