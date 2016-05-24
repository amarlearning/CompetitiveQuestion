#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[100];
int main()
{
  int n=0,i=0,j=1,x=0,y=0,cnt=0;
  scanf("%d",&n);
  scanf("%s",&a);
  while(j<n)
  {
    x = (int)a[i];
    y = (int)a[j];
    if(x == y)
    {
      j++;
      cnt++;
    }
    else
    {
      i = j-1;
      i++;
      j++;
    }
  }
  printf("%d",cnt);
	return 0;
}
