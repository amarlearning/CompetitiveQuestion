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
using namespace std;
long long int a[1009];
int mbit[21]={0},temp[21]={0};
int main()
{
  int n , m, k, mtrans=0, i;
  int friends = 0, j = 0, cnt = 0, l;
  cin >> n >> m >> k;
  rep(i,1,m+1) {
    cin >> a[i];
  }
  i = 0;
  mtrans = a[m+1];
  while(mtrans != 0) {
    mbit[i] = mtrans%2;
    mtrans/=2;
    i++;
  }
  rep(i,1,m) {
    mtrans = a[i];
    j=0;
    while (mtrans != 0) {
        temp[j] = mtrans%2;
        mtrans/=2;
        j++;
    }
    j=0;l=0;
    for(j=0;j<n;j++) {if(mbit[j]!=temp[j])cnt++;}
    if(cnt <= k) friends++;
    cnt=0;j=0;rep(j,0,20)temp[j]=0;
  }
  cout << friends << endl;
	return 0;
}
