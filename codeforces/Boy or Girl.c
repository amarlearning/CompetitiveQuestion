#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[500000];
int b[30] = {0};
int main()
{
	int i,x,y,cnt=0;
	scanf("%s",&a);
	y = strlen(a);
	for(i = 0; i < y; i++ )
	{
		x = (int)a[i] - 96;
		b[x]++;
	}
	for(i = 0; i < 27; i++)
	{
		if(b[i] == 1 || b[i] > 1)
		{
			cnt++;
		}
	}
	if(cnt % 2 == 0)
	{
		printf("CHAT WITH HER!");
	}
	else
	{
		printf("IGNORE HIM!");
	}
	return 0;
}
