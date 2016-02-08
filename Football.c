#include<stdio.h>
#include<math.h>
#include<string.h>
#define sc(t) scanf("%d",&t)
#define w(t) while(t--)
char a[110];
int main(void) 
{
	int i=1,cnt=1,total=0;
	scanf("%s",&a);
	int y = strlen(a);
	while(i<y)
	{
		if(a[i-1]==a[i])
		{
			cnt++;
		}
		else
		{
			cnt=1;
		}
		if(total<cnt)
		{
			total = cnt;
		}
		i++;
	}
	if(total<7)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
    return 0;
}


