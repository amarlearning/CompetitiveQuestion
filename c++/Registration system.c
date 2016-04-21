/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char names[100009][100];
int count[100009]={0};
char temp[100];
int main() {
	long int n, flag=0, i, j, k=1;
	scanf("%ld",&n);
	for(i=1;i<=n;i++) {
		flag = 0;
		scanf("%s",&temp);
			if(i == 1) {
				printf("OK\n");
				strcpy(names[k],temp);
				k++;
			}
			else {
				for(j=1;j<k;j++) {
					if(strcmp(temp,names[j]) == 0) {
						count[j]++;
						printf("%s",names[j]);
						printf("%d\n",count[j]);
						flag = 1;
						break;
					}
				}
				if(flag == 0) {
					strcpy(names[k],temp);
					k++;
					printf("OK\n");
				}
			}
		}
	return 0;
}
