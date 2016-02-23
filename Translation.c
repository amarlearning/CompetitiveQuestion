#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char s[110],t[110];
int main()
{scanf("%s",&s);
scanf("%s",&t);
strrev(t);
if(strcmp(s,t) == 0)
{printf("YES");}
else{printf("NO");}
return 0;}
