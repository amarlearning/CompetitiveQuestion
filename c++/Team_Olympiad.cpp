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
int p[5001]={0},m[5001]={0},s[5001]={0};
int main() {
  int n, i, x, limit=0;
  int pc=0, mc=0, sc=0;
  cin >> n;
  rep(i,1,n) {
    cin >> x;
    if(x == 1) {p[pc]=i;pc++;}
    else if(x == 2) {m[mc]=i;mc++;}
    else {s[sc]=i;sc++;}
  }
  limit = min(sc, min(pc,mc));
  cout<<limit<<endl;
  rep(i,0,limit-1)
    cout<<p[i]<<" "<<m[i]<<" "<<s[i]<<endl;
	return 0;
}
