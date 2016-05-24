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
int main()
{
	int n, i, x, y;
  long long int count = 0;
  cin>>n; x = n-2; y = 2;
  for(i=1;i<=n-1;i++) {
    if(i == 1) {count += n;}
    else {
      count += (x*y)+1;
      x--;
      y++;
    }
  }count++;
  cout<<count;
	return 0;
}
