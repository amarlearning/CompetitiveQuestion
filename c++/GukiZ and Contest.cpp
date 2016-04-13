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
struct twello {
  int x,y;
};
typedef struct twello twello;
long long int a[5000];
int rank[2009]={0};
int main() {
  int n, sum=1, x=-1, cnt=0;
  cin >> n;
  twello arr[n];
  rep(i,1,n) {
    cin >> arr[i].x;
    a[i] = arr[i].x;
  }
  sort(a+1,a+n+1);
  per(i,n,1) {
    if(i==n) {
      x = a[i];
      rank[a[i]]=sum;
      cnt=1;
    } else {
      if(x == a[i])cnt++;
      else {
        sum+=cnt;
        rank[a[i]]=sum;
        x = a[i];
        cnt=1;
      }
    }
  } rep(i,1,n) {
    arr[i].y = rank[arr[i].x];
  }
  rep(i,1,n) {
    cout << arr[i].y <<" ";
  }
	return 0;
}
