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
int a[500000]={0};
int main() {
	long long int n=0,m=0,flag=0;
  long long int x,sum=0,prev=1,i;
  cin>>n>>m;
  for(i=0;i<m;i++) {
    cin>>x;
    if(x >= prev) {sum += (x-prev);}
    else {sum += n - (prev-x);}
    prev = x;
  }
  cout<<sum;
	return 0;
}
