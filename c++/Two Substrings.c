/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[100010];
int main() {
	int i=0, first=0, last=0;
	scanf("%s",&a);
	if(strlen(a) < 4) {
		printf("NO\n");
	} else {
		while(i < strlen(a)) {
			if(a[i] == 'A' && first == 0) {
				if(a[i+1] == 'B') {
					first = 1;
					i+=1;
				}
			}
			else if(a[i] == 'B' && last == 0 && first == 1) {
				if(a[i+1] == 'A') {
					last = 1;
					i+=1;
				}
			}
			i+=1;
			if(first == 1 && last == 1) break;
		}
		if(first == 1 && last == 1)
			printf("YES\n");
		else {
			first = 0;last = 0,i=0;
			while(i < strlen(a)) {
				if(a[i] == 'B' && last == 0) {
					if(a[i+1] == 'A') {
						last = 1;
						i+=1;
					}
				}
				else if(a[i] == 'A' && first == 0 && last == 1) {
					if(a[i+1] == 'B') {
						first = 1;
						i+=1;
					}
				}
				i+=1;
				if(first == 1 && last == 1) break;
			}
			if(first == 1 && last == 1)
				printf("YES\n");
			else
			printf("NO\n");
		}
	}
	return 0;
}
