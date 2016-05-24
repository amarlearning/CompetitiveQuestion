#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[210];
int main()
{
	int i=0,l=0;
	scanf("%s",&a);
	l = strlen(a);
	while(i<=l-1)
	{
		if(a[i] == 'W')
		{
			if(a[i+1] == 'U')
			{
				if(a[i+2] == 'B')
				{
					i=i+3;
					printf(" ");
				}
				else
				{
					printf("%c",a[i]);
					i++;
				}
			}
			else
			{
				printf("%c",a[i]);
				i++;
			}
		}
		else
		{
			printf("%c",a[i]);
			i++;
		}
	}
	return 0;
}
