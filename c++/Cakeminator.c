/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[20][20];
int main() {
	int r, c, i, j, ans;
  int cnt=0, flag=0;
  scanf("%d%d",&r,&c);
  for(i=0;i<r;i++) {
    for(j=0;j<c;j++) {
      scanf(" %c",&a[i][j]);
    }
  }
  for(i=0;i<r;i++) {
    for(j=0;j<c;j++) {
      if(a[i][j] == 'S') {flag=0;break;}
      else if(a[i][j] == '.') {
        flag++;
      }
    }
    if(flag!=0) {
      for(j=0;j<c;j++) {
          a[i][j] = 'q';
      }
    }
    cnt += flag;
    flag=0;
  }


  for(i=0;i<c;i++) {
    for(j=0;j<r;j++) {
      if(a[j][i] == 'S') {flag=0;break;}
      else if(a[j][i] == '.') {
        flag++;
        a[j][i] = 'q';
      }
    }
    cnt += flag;
    flag=0;
  }
  printf("%d\n",cnt);
	return 0;
}
