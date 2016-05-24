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
long long int a[500000];
int main(){
  long int n, i, amount;
  int min = 110, money, cal=0;
  cin >> n;
  rep(i,1,n) {
    cin >>amount>>money;
    if(min > money) min = money;
    cal += min * amount;
  }
  cout <<cal<<endl;
	return 0;
}
