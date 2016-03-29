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
int a[15]={0};
int main() {
  int x, i, t;
  bool flag = false, temp = false;
  rep(i,1,7) {
    cin >> x;
    a[x]++;
  }
  rep(i,1,10) {
    if(a[i] >= 4){
      flag = true;
      a[i] -= 4;
      rep(i,1,10) {
        if(a[i] == 2) {
          temp = true;
        }
      }
      if(temp == true) cout <<"Elephant";
      else {cout <<"Bear";}
      break;
    }
  }
  if(flag == false) cout <<"Alien";
	return 0;
}
