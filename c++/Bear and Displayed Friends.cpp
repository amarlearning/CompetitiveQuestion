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
struct array {
	int x,y;
};
bool compare(array a, array b) {
	return a.x < b.x;
}
long long int t[150000]={0};
int awake[150000]={0};
array d[10];

int main() {
  long long int n, k, q, flag = 0;
  long long int i, a, b, cont=0,temp=0;
  cin >> n >> k >> q;
  if (k > n) {k = n;}
  rep(i,1,n) {
    cin >>t[i];
  }
  while(q--) {
    flag = 0;
    cin >> a >> b;
    if(a == 1) {
      awake[b] = 1;
      if(temp < k) {
        d[cont].x = t[b];
        d[cont].y = b;
        cont=0;temp++;
        sort(d, d+k, compare);
      } else {
        if(d[0].x < t[b]) {
          d[0].x = t[b];
          d[0].y = b;
          sort(d, d+k, compare);
        }
      }
    } else {
      if(awake[b] == 1) {
        for(i=0;i<k;i++) {
          if(b == d[i].y) {
            flag = 1;
            break;
          }
        }
        if(flag == 1) {cout <<"YES"<<endl;}
        else {cout <<"NO"<<endl;}
      } else {
        cout << "NO"<<endl;
      }
    }
  }
	return 0;
}
