/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
long long int a[500000];
int main() {
  int i, j, l, up=0, lp=0,x;
	char str[105];
  scanf("%s",&str);
  l = strlen(str);
  for(i=0;i<l;i++) {
    x = (int)str[i];
    if(x >= 65 && x <= 90) {
      up++;
    } else {
      lp++;
    }
  }
  if(up > lp) {
    for(i=0;i<l;i++) {
      x = (int)str[i];
      if(x >= 97 && x <= 122) {
        x -= 32;
        str[i] = (char)x;
      }
    }
  } else {
    for(i=0;i<l;i++) {
      x = (int)str[i];
      if(x >= 65 && x <= 90) {
        x += 32;
        str[i] = (char)x;
      }
    }
  }
  printf("%s\n",str);
	return 0;
}
