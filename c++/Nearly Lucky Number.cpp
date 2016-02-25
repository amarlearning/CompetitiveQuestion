#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[50];
int main()
{
	int i,y,cnt=0;
  scanf("%s",&a);
  y = strlen(a);
  for(i=0;i<y;i++)
  {
    if(a[i] == '4' || a[i] == '7')
    {
      cnt++;
    }
  }
  if(cnt == 4 || cnt == 7)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }
	return 0;
}
