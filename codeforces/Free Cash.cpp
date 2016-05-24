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
#define rep(i,a,n) for (int i=a;i<=n;i++)
using namespace std;
long long int a[500000];
int main() {
  long int n, cnt=1, fa,fb;
  long long int x,y,a,b,max=0;
  cin >> n;
  rep(i,1,n) {
    if(i==1) {
      cin >> a >> b;
    } else {
      cin >> x >> y;
      if(x == a && y == b) {
        cnt++;
      } else {
        if(max < cnt)
          max = cnt;
          cnt=1;
      }
      a = x;
      b = y;
    }
  }
  if(max < cnt) {max=cnt;}
  cout << max;
	return 0;
}
