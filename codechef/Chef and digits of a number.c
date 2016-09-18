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
char number[500000];
int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long int i, cntOne = 0, cntZero = 0;
		scanf("%s",&number);
		for(i = 0; i < strlen(number); i++) {
			if(number[i] == '1') {
				cntOne++;
			}
			else {
				cntZero++;
			}
		}
		if(cntZero == 1 || cntOne == 1) {
			printf("Yes\n");
		} else {
			printf("No\n");
		}
	}
	return 0;
}
