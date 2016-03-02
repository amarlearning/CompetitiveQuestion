#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char str[3],cpy[3];
int main()
{
	static int input,i,cnt;
	scanf("%d",&input);
	for(i=0;i<input;i++) {
		scanf("%s",&str);
		if(i == 0) {
			strcpy(cpy, str);cnt++;
		}
		else {
				if(strcmp(cpy,str) == 0) {
					// code
				}
				else {
					cnt++;
				}
				strcpy(cpy, str);
		}
	}
	printf("%d",cnt);
	return 0;
}
