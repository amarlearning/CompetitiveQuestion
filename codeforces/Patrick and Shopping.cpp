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
long long int a[500000];
int main() {
  long int a , b, c, travel=0;
  cin >> a >> b >> c;
  if(a < b) {
    travel += a;
    if(a+b < c) {
      travel += a+b;
      if(b < c+a) {
          travel += b;
      }else {
        travel += c+a;
      }
    } else {
      travel += c;
      if(b < c+a) {
          travel += b;
      }else {
        travel += c+a;
      }
    }
  } else {
    travel += b;
    if(a+b < c) {
      travel += a+b;
      if(a < c+b) {
          travel += a;
      }else {
        travel += c+b;
      }
    } else {
      travel += c;
      if(a < c+b) {
          travel += a;
      }else {
        travel += c+b;
      }
    }
  }
  cout << travel <<endl;
	return 0;
}

// 100 33 34
