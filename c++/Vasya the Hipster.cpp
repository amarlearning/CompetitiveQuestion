/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
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
int main(void) {
	static int x,y,sub=0;
  scanf("%d%d",&x,&y);
  printf("%d ",(x>=y ? y : x));
  sub = abs(x-y);
  if(sub > 0) {printf("%d",sub/2);}
  else {printf("0");}
	return 0;
}
