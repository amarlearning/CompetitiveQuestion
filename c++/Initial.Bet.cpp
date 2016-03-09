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
	static int sum=0,x=0,i;
  for(i=0;i<5;i++) {
    scanf("%d",&x);
    sum = sum + x;
  }
  if(sum%5 != 0 || sum == 0) {printf("-1");}
  else {printf("%d",sum/5);}
	return 0;
}
