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
  long int t;
  cin >> t;
  while(t--) {
    unsigned long long int n, m;
    cin >> n >> m;
    if(n == 1 && m == 2)
      cout << "Yes" <<endl;
    else if(n == 2 && m == 1)
      cout << "Yes" <<endl;
    else if(n%2==1 && m%2==1)
      cout << "No" <<endl;
    else if(n==1 || m==1)
      cout << "No" <<endl;
    else
      cout << "Yes" <<endl;
  }
	return 0;
}
