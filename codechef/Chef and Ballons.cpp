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
  int t;
  cin >> t;
  while(t--) {
    long long int r, g, b, k;
    unsigned long long int pick=0;
    cin >> r >> g >> b;
    cin >> k;
    bool flag =  false;
    if(r >= k || g >= k || b >= k) flag = true;
    if(flag = true) {
      if(r < k-1) pick += r;
      else pick += k-1;
      if(g < k-1) pick += g;
      else pick += k-1;
      if(b < k-1) pick += b;
      else pick += k-1;
      pick+=1;
      cout <<pick<<endl;
    }
  }
	return 0;
}
