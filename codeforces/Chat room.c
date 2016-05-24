#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[500000];
int main()
{
	int i,y,cnt=0;
	scanf("%s",&a);
	y = strlen(a);
	for(i=0;i<y;i++)
	{
		if(a[i] == 'h' && cnt == 0)
		{
			cnt = 1;
		}
		if(a[i] == 'e' && cnt ==1)
		{
			cnt = 2;
		}
		if(a[i] == 'l' && cnt ==2)
		{
			cnt = 3;
		}

		if(a[i+1] == 'l' && cnt ==3)
		{
			cnt = 4;
		}
		if(a[i] == 'o' && cnt ==4)
		{
			cnt = 5;
		}
	}
	if(cnt == 5)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	return 0;
}
