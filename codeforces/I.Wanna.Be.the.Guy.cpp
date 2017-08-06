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
static int a[500];
int main() {
	static int n,p,i,x,cnt;

	scanf("%d",&n);
	scanf("%d",&p);

	for(i=0;i<p;i++) {
		scanf("%d",&x);
		a[x] = 1;
	}

	scanf("%d",&p);

	for(i=0;i<p;i++) {
		scanf("%d",&x);
		a[x] = 1;
	}

	for(i=1;i<=n;i++) {
		if(a[i] == 1) {
			cnt++;
		}
	}
	if(cnt == n) {
		printf("I become the guy.");
	}
	else {
		printf("Oh, my keyboard!");
	}
	return 0;
}
