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
int a[20] = {0},b[20] = {0};
using namespace std;
int main()
{
  long long int n, i=-1, j=0;
  int fixed=0,max=0, fuck = 0; cin>>n;
  if(n >= 0) {cout<<n;}
  else if(n == -10 || n == -20 || n == -30 || n == -40) {cout<<"0";}
  else if(n == -90) {cout<<"0";}
  else if(n == -50 || n == -60 || n == -70 || n == -80) {cout<<"0";}
  else {
    n = abs(n);
    while (n>0) {
      i += 1;
      a[i] = n%10;
      b[i] = a[i];
      n = n/10;
    }
    fixed = i;
    if(a[0] > a[1]) {max = a[0];fuck=0;}
    else {max = a[1];fuck=1;}
    cout<<"-";
    for(i=fixed;i>=0;i--) {
      if(a[i] == max && i == fuck);
        // code ...
      else {cout<<a[i];}
    }
  }
	return 0;
}
