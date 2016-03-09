#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[500],b[500];
int main() {
  static int l=0,i=0;
  scanf("%s",&a);
	scanf("%s",&b);
  l = strlen(a);
  for(i=0;i<l;i++) {
    if(a[i] == b[i]) {printf("0");}
    else {printf("1");}
  }
	return 0;
}
