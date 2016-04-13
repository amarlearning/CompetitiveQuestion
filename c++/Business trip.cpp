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
#define per(i,n,a) for (int i=n;i>=a;i--)
using namespace std;
long long int a[500000];
int main() {
	int k, cnt=0, flag=0;
  cin >> k;
  rep(i,1,12) {
    cin >> a[i];
  } sort(a+1,a+13);
  per(i,12,1) {
    if(cnt >= k) break;
    else {
      cnt += a[i];
      flag++;
    }
  }
  if(cnt < k) cout << "-1" <<endl;
  else cout << flag << endl;
	return 0;
}
