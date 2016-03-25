/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[500000];
int main() {
  int n, one=0, zero=0, i;
  scanf("%d",&n);
  scanf("%s",&a);
  for(i=0;i<n;i++) {
    if(a[i] == '1') one++;
    else zero++;
  }
  printf("%d",abs(one-zero));
	return 0;
}
