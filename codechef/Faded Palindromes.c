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
char palindrome[500000];
int main() {
	long long int t;
	scanf("%lld",&t);
	while(t--) {
		long int tempLeft, tempRight, i, length, alter;
		long int flag = 0;
		scanf("%s",&palindrome);
		length = strlen(palindrome);
		for(i = 0; i < length/2; i++) {
				if(palindrome[i] != palindrome[length-1-i]) {
					tempLeft = (int) palindrome[i];
					tempRight = (int) palindrome[length-1-i];
					if(tempLeft == 46 || tempRight == 46) {
						if(tempLeft > 96 && tempLeft < 123) {
							palindrome[length-1-i] = palindrome[i];
						} else {
							palindrome[i] = palindrome[length-i-1];
						}
					} else {
						flag = 1;
						break;
					}
				} else {
					if(palindrome[i] == '.') {
						palindrome[i] = 'a';
						palindrome[length-1-i] = 'a';
					}
				}
			}
		if(length%2 == 1) {
			alter = ceil(length/2);
			if(palindrome[alter] == '.') {
				palindrome[alter] = 'a';
			}	
		}
		if(flag == 0) {
			printf("%s\n",palindrome);			
		} else {
			printf("-1\n");
		}
	}
	return 0;
}
