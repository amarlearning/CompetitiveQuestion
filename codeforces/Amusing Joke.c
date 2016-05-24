#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
int count[30]={0},compare[30]={0};
char a[120];
int main() {
	static int l=0,i=0,temp=0,z=0;
	scanf("%s",&a);
	l = strlen(a);
	for(i=0;i<l;i++) {
		temp = (int)a[i] - 64;
		count[temp]++;
	}
	scanf("%s",&a);
	l = strlen(a);
	for(i=0;i<l;i++) {
		temp = (int)a[i] - 64;
		count[temp]++;
	}
	scanf("%s",&a);
	l = strlen(a);
	for(i=0;i<l;i++) {
		temp = (int)a[i] - 64;
		compare[temp]++;
	}
	for(i=1;i<27;i++) {
		if(count[i] != compare[i]){z=1;}
	}
	if(z==1){printf("NO");}
	else{printf("YES");}
	return 0;
}
