/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include<bits/stdc++.h>
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
long long int a[100001], sum[100030];
int main() {
  long long int n, x=0, i;
  long long int maxs = 0;
  cin>>n;
  for(i=1;i<=n;i++) {
    cin>>x;
    a[x]++;
    if(maxs < x) {maxs = x;}
  }
  sum[0] = 0;
  sum[1] = a[1];
  for(i=2;i<=maxs;i++) {
    sum[i] = max(sum[i-2] + a[i]*i , sum[i-1]);
  }
  cout<<sum[maxs];
	return 0;
}
