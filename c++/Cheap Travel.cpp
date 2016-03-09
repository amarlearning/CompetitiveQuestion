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
	static int n=0,m=0,a=0,b=0;
  static int money=0;
  float ratio =0;
  scanf("%d%d%d%d",&n,&m,&a,&b);
  ratio = (float)b/m;
  if(ratio <= a) {
    while(n-m>0) {
      n = n-m;
      money = money+b;
    }
    if(n*a <= b) {
      money = money + n*a;
    }
    else {money = money + b;}
    printf("%d",money);
  } else {
    money = money + n*a;
    printf("%d",money);
  }
	return 0;
}
