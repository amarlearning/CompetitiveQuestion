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
long long int a[110],b[110];
int main() {
  int n, i, j;
  int ans=0,max_one = 0;
  cin >> n;
  rep(i,1,n) {
    cin >> a[i];
  }
  rep(i,1,n) {
    rep(j,i,n) {
      rep(k,1,n) {
        b[k] = a[k];
      }
      rep(k,i,j) {
        b[k] = 1 - b[k];
      }
      rep(k,1,n) {
        if(b[k] == 1) {ans++;}
      }
      if(max_one < ans) {max_one = ans;}
      ans=0;
    }
  }
  cout << max_one <<endl;
	return 0;
}
