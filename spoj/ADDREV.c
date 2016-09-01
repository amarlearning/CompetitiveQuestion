/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007

long long int reverse_number(long int number) {
	long long int temp=0, power=0, cnt=0, orignal = number;
	long long int reverse=0;
	while(orignal > 0) {
		orignal = orignal/10;
		cnt++;
	}
	power = pow(10, cnt-1);
	while(number > 0) {
		temp = number%10;
		temp *= power;
		reverse += temp;
		power /= 10;
		number /= 10;
	}
	return reverse;
}

int main() {
	long long int t;
	scanf("%lld",&t);
	while(t--) {	
		long long int m=0, n=0, revm=0, revn=0, answer;
		scanf("%lld%lld",&m,&n);
		revm = reverse_number(m);
		revn = reverse_number(n);
		answer = revn + revm;
		printf("%lld\n",reverse_number(answer));
	}
	return 0;
}
