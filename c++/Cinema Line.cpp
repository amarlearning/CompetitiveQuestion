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
long long int a[3]={0};
int main() {
  long long int n, sum=0, x=0, flag=0;
  cin >> n;
  rep(i,1,n) {
    cin >> x;
    if(x == 25) {
      a[0]++;
    }
     else if(x == 50) {
      if(a[0] > 0) {a[0]--;a[1]++;}
      else { flag = 1; break;}
    }
     else {
      if(a[0] > 0 && a[1] > 0) {
        a[0]--;a[1]--;
      }
      else if(a[0] >= 3) {
        a[0] -= 3;
      }
       else {
        flag = 1; break;
      }
    }
  }
  if(flag == 0) {
    cout<<"YES";
  } else {
    cout<<"NO";
  }
	return 0;
}
