/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007

int main(void)
{
	long int t;
	char lone[200002],ltwo[200002]; 
	scanf("%ld",&t);
	while(t--)
	{
 		long int count=0,j=1,index=-1,index1=-1,m,n,i;
		int flag=0;
		scanf("%s",lone);
		scanf("%s",ltwo);
		n=strlen(lone);
		m=strlen(ltwo);
		for(i=0;i<m;i++)
		{
			if(lone[i]=='#')
			{
				index=i;
				break;
			}
		}
		for(i=0;i<m;i++)
		{
		 if(ltwo[i]=='#')
		{
			index1=i;
			break;
		}
	}	
	if(index==-1 || index1==-1)
	{
		count=0;
	}
	else{
		if(index<index1)
			j=2;
	 
		for(i=0;i<m;i++)
		{
			if(lone[i]=='#' && ltwo[i]=='#')
			{
				flag++;
				break;
			}
			else
			{ 
				if(j==1)
				{
					if(lone[i]=='#')
					{
						j=2;
						count++;
					}
				}
				else if(ltwo[i]=='#')
				{
					count++;
					j=1;
				}
			}				
		}
	}
	if(flag!=0)
		printf("No\n");
	else {
		printf("Yes\n");
		printf("%ld\n",count);
		}
	}
	return 0;
} 