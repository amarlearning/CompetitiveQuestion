#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[500];
int main() 
{
	int y = 0,i,x = 0,z=0;
	scanf("%s",&a);
	y=strlen(a);
	for(i=0;i<y;i++)
	{
		x = (int)a[i];
		if(x>=65 && x<=90)
		{
			x = x + 32;
		}
		if(x == 97 || x == 101 || x == 105 || x == 111 || x == 117 || x == 121 )
		{
			z = 1;
		}
		else
		{
			printf(".");
			printf("%c",x);
		}
	}
	return 0;
}
