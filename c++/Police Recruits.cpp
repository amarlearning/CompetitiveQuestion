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
  int n, x, crime=0;
  long int police=0;
  cin >> n;
  rep(i,1,n) {
    cin >> x;
    if(x < 0)
      if(police > 0) police -= 1;
      else crime += 1;
    else police += x;
  }
  cout << crime << endl;
	return 0;
}
