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
long long int a[500000];
int main() {
	int n, i=0, cnt=0;
  int max = 0, min = 0;
  cin>>n;
  for(i=1;i<=n;i++) {
    cin>>a[i];
  }
	min = max = a[1];
  for(i=2;i<=n;i++) {
    if(a[i] > max) {
			max = a[i];
			cnt++;
		}
		if(a[i] < min) {
			min = a[i];
			cnt++;
		}
  }
  cout<<cnt;
	return 0;
}
