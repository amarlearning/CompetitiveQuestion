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
int row[60]={0}, col[60]={0};
int main() {
  int n, i, cnt=0;
  int a, b;
  cin >> n;
  rep(i,1,n*n) {
    cin >> a >> b;
    cnt += 1;
    if(row[a] != 1 && col[b] != 1) {
      row[a] = 1;
      col[b] = 1;
      cout << cnt <<" ";
    }
  }
	return 0;
}
