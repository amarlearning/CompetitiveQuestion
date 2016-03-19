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
using namespace std;
long long int a[100009];
int main() {
	int t, i, left, right;
  cin>>t;
  for(i=0;i<t;i++) {
    cin>>a[i];
  }
  sort(a+0,a+t);
  for(i=0;i<t;i++) {
    if(i == 0) {
      // operate the smallest -ve value(1st index)
      cout<<abs(a[i] - a[i+1])<<" "<<abs(a[i] - a[t-1])<<"\n";
    } else if(i == t-1) {
        // operate the largest -ve value(last index)
        cout<<abs(a[i-1] - a[i])<<" "<<abs(a[i] - a[0])<<"\n";
    } else {
      // anyother index
      left = abs(a[i-1]-a[i]);
      right = abs(a[i+1]-a[i]);
      cout<<(left<right ? left : right)<<" ";
      left = abs(a[0] - a[i]);
      right = abs(a[t-1] - a[i]);
      cout<<(left>right ? left : right)<<"\n";
    }
  }
	return 0;
}
