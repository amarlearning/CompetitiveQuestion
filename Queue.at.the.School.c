#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[100];
int main()
{
	int n,t,i=0;
	scanf("%d%d",&n,&t);
	scanf("%s",&a);
	while(t>0)
	{
		if(a[i] == 'B')
		{
			if(a[i+1] == 'G')
			{
				a[i] = 'G';
				a[i+1] = 'B';
				i++;
			}
		}
		if(i >= n-2)
		{
			i = -1;
			t--;
		}
		i++;
	}
	printf("%s",a);
	return 0;
}
