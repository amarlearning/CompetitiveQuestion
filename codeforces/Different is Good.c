/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
#define rep(i,a,n) for (int i=a;i<n;i++)
char a[500000];
int c[30]={0};
int main() {
  long int n, x, cnt=0, flag=0,i,chan=0;
  scanf("%ld\n",&n);
  scanf("%s",&a);
    for(i=0;i < strlen(a);i++) {
      x = (int)a[i]-96;
      c[x]++;
    }
    for(i=1;i <27 ;i++) {
      if(c[i] > 1) {
        cnt += c[i];
        cnt--;
        chan++;
      }
      else if(c[i] == 1){
        flag++;
      }
    }
    if(cnt+flag+chan <=26) {
      printf("%d\n",cnt);
    }
    else {
      printf("-1\n");
    }
	return 0;
}
