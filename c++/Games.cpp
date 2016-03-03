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
static int b[500];
int main() {
	static int n,cnt,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if(a[i] == b[j]) {
				cnt++; }
		}
	}
	printf("%d",cnt);
	return 0;
}
