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
#define max(a,b) (a > b ? a : b)
#define rep(i,a,n) for (int i=a;i<=n;i++)
#define per(i,n,a) for (int i=n;i>=a;i--)
using namespace std;
long long int a[500000];
int main() {
	ios::sync_with_stdio(0);
	long int n, m, x, y, temp;
  long long int str, flag=0, position;
  cin >> n >> m;
  cin >> x >> y;
  rep(i,1,n) {
    cin >> temp;
    if(i == x)
      str = temp;
  }
  rep(i,1,m) {
    cin >> temp;
    if(str < temp) {
      flag = 1;
      position = i;
      break;
    }
  }
  if(position+y-1 > m) flag=0;
  if(flag == 1) cout <<"YES"<<endl;
  else cout <<"NO"<<endl;
	return 0;
}
