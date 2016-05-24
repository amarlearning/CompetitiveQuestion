#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[500000];
int b[30]={0};
int main() {
	static int t,i=0,temp=0;
  static int cnt=0;
	scanf("%lld",&t);
	scanf("%s",&a);
  for(i=0;i<t;i++) {
    temp = (int)a[i];
    if(temp >= 65 && temp <= 90) {temp-=64;b[temp]++;}
    else {temp-=96;b[temp]++;}
  }
  for(i=1;i<27;i++) {
    if(b[i] > 0) {cnt++;}
  }
  if(cnt == 26) {printf("YES");}
  else {printf("NO");}
	return 0;
}
