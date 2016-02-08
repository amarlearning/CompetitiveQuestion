#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[1010];
int main()
{
	int x=0,y=0,i=0;
	scanf("%s",&a);
	y = strlen(a);
	x = a[0];
	if(x>=97 && x<=122)
	{
		x = x - 32;
	}
	printf("%c",x);
	for(i=1;i<y;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
