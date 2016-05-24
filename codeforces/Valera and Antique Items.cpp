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
  long long int n, v, x, cnt=0;
  long long int temp, var=0;
  cin >> n >> v;
  rep(i,1,n) {
    cin >> x;
		int flag = 0;
    rep(j,1,x) {
      cin >> temp;
      if(v > temp && flag == 0) {
        a[cnt] = i;
        cnt++;
        flag = 1;
      }
    }
  }
  cout << cnt << endl;
  rep(i,0,cnt-1)
    cout << a[i] << " ";
	return 0;
}
