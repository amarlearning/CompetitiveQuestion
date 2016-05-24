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
  int n,m,i,x,j;
  scanf("%d%d",&n,&m);
  for(i=1;i<=n;i++) {
    if(i%2==1) {for(j=1;j<=m;j++) {printf("#");}printf("\n");}
    else {
      x = i/2;
      if(x%2==1) {for(j=1;j<m;j++){printf(".");}printf("#\n");}
      else {printf("#");for(j=1;j<m;j++){printf(".");}printf("\n");}
    }
  }
	return 0;
}
