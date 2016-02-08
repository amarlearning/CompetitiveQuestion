#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[500000];
int main()
{
	int i=1,y=0,x=0,cnt=0,z=0;
	scanf("%s",&a);
	y = strlen(a);
	while(i<y)
	{
		x = (int)a[i];
		if(x>=65 && x<=90)
		{
			cnt++;
		}
		i++;
	}
	if(cnt == y-1)
	{
		z = (int)a[0];
		if(z>=65 && z<=90)
		{
			z=z+32;
			printf("%c",z);
		}
		else
		{
			z=z-32;
			printf("%c",z);
		}
		for(i=1;i<y;i++)
		{
			z = (int)a[i];
			z=z+32;
			printf("%c",z);
		}
	}
	else
	{
		printf("%s",a);
	}
	return 0;
}
