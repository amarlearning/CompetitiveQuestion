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
int main()
{
	long int n,cnt=0,temp=0;
  cin>>n;
  if(n >= 5) {
    temp  = n/5;
    cnt = cnt + temp;
    n = n - temp*5;
    temp = 0;
  } if(n >= 4) {
    temp  = n/4;
    cnt = cnt + temp;
    n = n - temp*4;
    temp = 0;
  } if(n >= 3) {
    temp  = n/3;
    cnt = cnt + temp;
    n = n - temp*3;
    temp = 0;
  } if(n >= 2) {
    temp  = n/2;
    cnt = cnt + temp;
    n = n - temp*2;
    temp = 0;
  } if (n > 0) {
    cnt = cnt + n;
    n = 0;
  } std::cout <<cnt<< std::endl;
	return 0;
}
