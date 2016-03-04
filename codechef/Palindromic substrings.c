#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
int main() {
	long long int t;
	scanf("%lld",&t);
	while(t--) {
    int lengtha=0,lengthb=0,temp=0,flag=0,i=0;
    int acon[30]={0},bcon[30]={0};
    char a[1050],b[1050];
    scanf("%s",&a);
    scanf("%s",&b);
    lengtha = strlen(a);
    lengthb = strlen(b);
    if(lengtha+lengthb > 2) {
      for(i=0;i<lengtha;i++) {
        temp = (int)a[i] - 96;
        acon[temp] = 1;
      }

      for(i=0;i<lengthb;i++) {
        temp = (int)b[i] - 96;
        bcon[temp] = 1;
      }
      temp = 0;
      for(i=1;i<lengtha;i++) {
        if(a[i-1] != a[i]){
          temp = (int) a[i-1] - 96;
          if(bcon[temp] == 1)flag++;
        }
      }
      if(flag == 0) {
        for(i=1;i<lengthb;i++) {
          if(b[i-1] != b[i]){
            temp = (int) b[i] - 96;
            if(acon[temp] == 1)flag++;
          }
        }
      }
    }
    if(flag > 0){
      printf("Yes\n");
    }
    else {printf("No\n");}
	}
	return 0;
}
