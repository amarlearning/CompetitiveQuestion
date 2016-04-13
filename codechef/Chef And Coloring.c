/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[100009];
int main() {
		int m,j;
		scanf("%d",&m);
		for(j=0;j<m;j++) {
		int i;
		long int n, r=0;
		long int g=0, b=0, main=0;
		scanf("%ld",&n);
		scanf("%s",&a);
		for(i=0;i<strlen(a);i++) {
			if(a[i] == 'R') r++;
			else if(a[i] == 'G') g++;
			else if(a[i] == 'B') b++;
			else {}
		}
		if(r > g) {
			if(r > b) {main = r;}
			else {main = b;}
		} else {
			if(g > b) {main = g;}
			else {main = b;}
		}
		printf("%ld\n",(n-main));
	}
	return 0;
}
