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
bool a[500];
int main() {
  long long int n, extras=0;
  long long int make=1,i=0;
  cin >> n;
  if((n&(n-1))==0)
    cout <<"1"<<endl;
  else {
    while(n > 1) {
      a[i] = n%2==0 ? 0 : 1;
      n = n/2;
      i++;
      if(n==1) {n=0;a[i] = 1;i++;}
    }
    make = i;
    rep(i,0,make) {
      if(a[i] == 1){extras++;}
    }
    cout << extras;
  }
	return 0;
}
