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
long long int a[500000];
int main() {
	static long int x,cup=0,medal=0,n=0,i;
  for(i=1;i<=3;i++) {cin>>x;cup+=x;}
  for(i=1;i<=3;i++) {cin>>x;medal+=x;}
  cin>>n;if(cup%5==0){cup/=5;}else{cup/=5;cup+=1;}
  if(medal%10==0){medal/=10;}else{medal/=10;medal+=1;}
  if(cup+medal<=n){cout<<"YES";}else{cout<<"NO";}
	return 0;
}
