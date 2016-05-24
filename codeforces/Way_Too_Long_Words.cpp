#include <string.h>
#include <stdio.h>
#define pi 3.14159
#define mod 1000000007
char a[500];
int main() 
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		int y = 0;
		scanf("%s",&a);
		y = strlen(a);
		if(y<11)
		{
			printf("%s\n",a);
		}
		else
		{
			printf("%c",a[0]);
			printf("%d",(y-2));
			printf("%c\n",a[y-1]);
		}
	}
	return 0;
}
