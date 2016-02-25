#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[5];
char p[] = "X++";
char q[] = "X--";
char r[] = "++X";
char s[] = "--X";
int main() 
{
	int n,x=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",&a);
		if(strcmp(a,p) == 0)
		{
			x++;
		}
		if(strcmp(a,q) == 0)
		{
			x--;
		}
		if(strcmp(a,r) == 0)
		{
			++x;
		}
		if(strcmp(a,s) == 0)
		{
			--x;
		}
	}
	printf("%d\n",x);
	return 0;
}
