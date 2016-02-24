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
long long int a[100];
int main()
{
  int n,m,flag=0,temp=0,i=0,x=0;
  cin>>n>>m;
  for(i=0;i<m;i++)
  {
    cin>>a[i];
  }
  sort(a+0,a+m);
  for(i=0;i<=m-n;i++)
  {
    x = a[i+n-1] - a[i];
    if(i==0) {
      flag = x;
    }
    if(flag>x) {
      flag = x;
    }
  }
  cout<<flag;
	return 0;
}
