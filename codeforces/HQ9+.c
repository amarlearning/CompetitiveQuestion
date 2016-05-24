#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[200];
int main()
{
	int i=0,y=0,temp=1,x=0;
	scanf("%s",&a);
	y = strlen(a);
	for(i=0;i<y;i++)
	{
		x = (int)a[i];
		if(x == 72 || x == 81 || x == 57)
		{
			temp = 0;
			printf("YES");
			break;
		}
	}
	if(temp == 1)
	{
		printf("NO");
	}
	return 0;
}
