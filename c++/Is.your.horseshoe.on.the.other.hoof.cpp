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
long long int a[4];
int main()
{
	static int i,j,cnt;
  for(i=0;i<4;i++) {
    scanf("%d",&a[i]);
  }
  sort(a+0,a+4);
  for(i=1;i<4;i++) {
    if(a[i-1] == a[i])cnt++;
  }
  printf("%d",cnt);
	return 0;
}
