#include <string.h>
#include <fstream>
#include <iostream>
#include <string>
#include <complex>
#include <math.h>
#include <set>
#include <vector>
#include <map>
#include <queue>
#include <stdio.h>
#include <stack>
#include <algorithm>
#include <list>
#include <ctime>
#include <memory.h>
#include <ctime>
#include <assert.h>
#define pi 3.14159
#define mod 1000000007
using namespace std;
int main() {
	static int t;
	scanf("%d",&t);
	while(t--) {
		long long int a[100020]={0},b[100020]={0};
		long long int n=0,k=0,i=0,temp=0,backa=0,product=0;
		long long int sum = 0,total=0;
		scanf("%lld%lld",&n,&k);
		for(i=0;i<n;i++) {
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++) {
			scanf("%lld",&b[i]);
		}
		for(i=0;i<n;i++) {
			sum = sum + (a[i]*b[i]);
		}
		total = sum;
		if(k>0) {
			for(i=0;i<n;i++) {
					product = (a[i]*b[i]);
					sum = sum - (a[i]*b[i]);
					backa = a[i];
					if(product > 0) {
						if(a[i]>0){a[i] = a[i]+k;}
						else {a[i] = a[i]-k;}
					}
					else if(product < 0){
						if(a[i]>0){a[i] = a[i]-k;}
						else {a[i] = a[i]+k;}
					}
					else {
						if(b[i]!=0) {
								if(b[i] > 0) {a[i] = a[i]+k;}
								else {a[i] = a[i] - k;}
						}
					}
					sum = sum + (a[i]*b[i]);
					if(total<sum){total=sum;}
					sum = sum - (a[i]*b[i]);
					a[i] = backa;
					sum = sum + (a[i]*b[i]);
			}
		}
		printf("%lld\n",total);
	}
	return 0;
}
