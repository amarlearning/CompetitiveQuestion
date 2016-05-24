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
  int n, m, min;
  cin >> n >> m;
  if(n < m) cout << "-1";
  else {
    min = n%2==0 ? n/2 : n/2+1 ;
    if(min%m!=0) {
      while(min%m!=0 && min<=n) {
        min+=1;
      }
    }
    if(min%m==0 && min<=n) {cout<<min<<endl;}
    else{cout<<"-1"<<endl;}
  }
	return 0;
}
