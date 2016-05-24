#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[110];
char b[110];
int main()
{
	int i=0,y=0,temp=0,flag=0;
	scanf("%s",&a);
	scanf("%s",&b);
	y = strlen(a);
	while(i<y)
	{
		temp = (int)a[i];
		flag = (int)b[i];
		if(temp>=65 && temp<=90)
		{
			temp = temp + 32;
		}
		if(flag>=65 && flag<=90)
		{
			flag = flag + 32;
		}
		if(temp == flag)
		{
			i++;
			if(i == y)
			{
				printf("0");
			}
		}
		else if(temp > flag)
		{
			printf("1");
			break;
		}
		else
		{
			printf("-1");
			break;
		}
	}
	return 0;
}
