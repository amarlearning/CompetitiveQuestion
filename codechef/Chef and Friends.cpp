/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <map>
#include <vector>
#include <stdlib.h>
#include <memory.h>
#include <time.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <cassert>
#include <queue>

using namespace std;

const int maxn = 1007;
long int mnt[maxn][maxn];
long int color[maxn];

int dfs(long int v, long int col, long int n) {
	color[v] = col;

	for(long int i=1;i<=n;i++) {
		if(i != v && mnt[v][i]) {
			if(color[i] == 0) { 
				if(!dfs(i,3-col,n))
				          return 0;
			}
			if(color[i] != 3-color[v])
				return 0;
		}
	}
	return 1;
}


int main(void) {
	long int  T;
	scanf("%ld",&T);
	while(T--) {
		
		long int n, m, flag = 1;
		scanf("%ld%ld", &n, &m);

		for(int i=1; i<=n; i++) {
			for(int j=1; j<=n; j++) {
			          mnt[i][j] = 1;
			}
		}

		long int a, b;
		for(int i=1; i<=m; i++) {
			scanf("%ld%ld",&a,&b);
			mnt[a][b] = mnt[b][a] = 0;
		}

		memset(color, 0, sizeof(color));

		for(long int i=1;i<=n;i++) {
			if(color[i] == 0) {
				if(!dfs(i,1,n))
					flag = 0;
			}
		}

		if(flag) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}