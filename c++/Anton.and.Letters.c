#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[1009];
static int b[30];
int main()
{
	static int i,length,charint,cnt;
	gets(a);
	length = strlen(a);
	for(i=0;i<length;i++) {
		charint = (int)a[i];
		if(charint >= 97 && charint <= 122) {
			charint = charint - 96;
			b[charint]++;
		}
	}
	for(i=0;i<30;i++) {
		if(b[i] > 0)cnt++;
	}
	printf("%d",cnt);
	return 0;
}
