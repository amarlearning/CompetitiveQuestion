/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/

#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
#define rep(i,a,n) for (int i=a;i<n;i++)
long long int a[500000];
int main() {

	// Input test case, this is not an infinite Loop.!!

	long long int test,j;
	scanf("%lld",&test);
	for(j=0;j<test;j++) {

		// Variable defination for I/O

		long long int activity=0, totalLaddu=0, i=0;
		long long int bugCount=0, rank=0, bonus=0, months=0;
		char origin[30], subActivity[100];

		// Input activities ans origins of Hackers.!!

		scanf("%lld",&activity);
		scanf("%s",&origin);

		// Calculating algorithm for total laddu's.
		// Sarcasm is : I didn't get one.!!

		for(i=0;i<activity;i++) {
			scanf("%s",&subActivity);
			if(subActivity[0] == 'B') {
				scanf("%lld",&bugCount);
				totalLaddu += bugCount;
			} else if(subActivity[0] == 'C') {
				if(subActivity[8] == 'W') {
					scanf("%lld",&rank);
					if(rank < 21) {
						bonus = 20 - rank;
					}
					totalLaddu += (300 + bonus);
					bonus = 0;
				} else {
					totalLaddu += 50;
				}
			} else {
				totalLaddu += 300;
			}
		}

		// ORIGIN == INDIAN  ? 2 months : 4 months [find out]

		if(origin[0] == 'I') {
			months = totalLaddu/200;
			printf("%ld\n",months);
		} else {
			months = totalLaddu/400;
			printf("%ld\n",months);
		}

		//	Go Go Go fast.. other hackers are waiting for there Laddu's count

	}
	return 0;
}
