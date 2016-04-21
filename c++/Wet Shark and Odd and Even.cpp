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
#define rep(i,a,n) for (long long int i=a;i<=n;i++)
#define per(i,n,a) for (long long int i=n;i>=a;i--)
using namespace std;
struct twello {
  unsigned long long int odd,even;
};
int main() {
	twello number[100009];
  unsigned long long int n, x, o=1, e=1;
  unsigned long long int sum=0,minodd=10000000000000;
  cin >> n;
  rep(i,1,n) {
    cin >> x;
    if(x%2 == 0) {
      number[e].even = x;
      e++;
    } else {
      number[o].odd = x;
      if(minodd > x) minodd = x;
      o++;
    }
  }
  rep(i,1,e-1) {
    sum += number[i].even;
  }
  o -= 1;
  if(o%2 == 0) {
    rep(i,1,o) {
      sum += number[i].odd;
    }
  } else {
    rep(i,1,o-1) {
      sum += number[i].odd;
    }
    if(minodd != number[o].odd) {
      sum -= minodd;
      sum += number[o].odd;
    }
  }
  cout << sum <<endl;
	return 0;
}
