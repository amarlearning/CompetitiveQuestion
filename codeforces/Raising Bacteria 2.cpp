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
#define rep(i,a,n) for (int i=a;i<n;i++)
using namespace std;
long long int a[500000];
int main() {
  long long int n, extras=0;
  long long int make=1;
  cin >> n;
  if((n&(n-1))==0)
    cout <<"1"<<endl;
  else {
    while(n!=1) {
      while(make*2 < n) {
        make *= 2;
      }
      n -= make;
      make = 1;
      extras++;
      if((n&(n-1))==0) {extras++;break;}
    }
    cout << extras <<endl;
  }
	return 0;
}
