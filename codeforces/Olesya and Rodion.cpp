/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
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
	static int n=0,t=0,i;
	scanf("%d%d",&n,&t);
	if(t==10) {
		if(n==1){printf("-1");}
		else {printf("1");
		for(i=1;i<n;i++) {printf("0");}}
	} else {
		for(i=0;i<n;i++) {printf("%d",t);}
	}
	return 0;
}
