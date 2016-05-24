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
int main() {
  static long n,i,check,cnt,flag,x;
  scanf("%ld",&n);
  for(i=0;i<n;i++) {
    scanf("%ld",&x);
    if(i==0){check = x;cnt++;}
    else {
      if(check<=x) {
        check = x;
        cnt++;
      }
      else {
        if(flag<cnt) {
          flag = cnt;
        }
        cnt = 0;
        cnt++;
        check = x;
      }
    }
  }
  if(flag<cnt){flag = cnt;}
  printf("%ld",flag);
	return 0;
}
