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
  int n, k, i, x;
  int cnt = 0;
  cin >> n >>k;
  rep(i,1,n) {
    cin >> x;
    if((x+k) <= 5) {
      cnt++;
    }
  }
  cout << cnt/3;
	return 0;
}
