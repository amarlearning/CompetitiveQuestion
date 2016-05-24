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
char a[1020]={0},b[1020]={0};
int main() {
	int t=0,cnt=0;
  int i=0,x=0;
	scanf("%lld",&t);
  scanf("%s",&a);
  scanf("%s",&b);
  for(i=0;i<t;i++) {
    x = abs(a[i]-b[i]);
    if(x > 5) {x = 10 - x;}
    cnt = cnt + x;
  }
  printf("%d",cnt);
	return 0;
}
