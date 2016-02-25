#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[110];
char b[100];
int main()
{
	int i=0,n=0,x=0,j=0,lb=0,temp=0;
	scanf("%s",&a);
	n = strlen(a);
	for(i=0;i<n;i=i+2)
	{
		x = (int)a[i];
		x = x-48;
		b[j] = x;
		j++;
	}
	lb = j;
	for(i=0;i<lb-1;i++)
	{
		for(j=0;j<lb-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				temp = b[j+1];
				b[j+1] = b[j];
				b[j] = temp;
			}
		}
	}
	for(i=0;i<lb;i++)
	{
		printf("%d",b[i]);
		if(i+1!=lb)
		{
			printf("+");
		}
	}
	return 0;
}
