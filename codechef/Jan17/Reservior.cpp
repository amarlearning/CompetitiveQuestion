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

#ifndef LL
	#define LL long long
#endif

int main(int argc, char const *argv[]) {
	int T;
	cin >> T;
	
	while(T--) {
		LL int N, M, WC = 0, flag = 0;
		cin >> N >> M;
		char a[1010][1010];
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < M; ++j) {
				cin >> a[i][j];
				if(a[i][j] == 'W')
					WC = 1;
			}
		}

		if(WC == 0) {
			for (int i = 1; i < N; ++i) {
				for (int j = 0; j < M; ++j) {
					if(a[i][j] == 'A') {
						if(a[i-1][j] == 'B') {
							flag = 1;
							break;
						}
					}
				}

				if(flag == 1)
					break;

			}

			if(flag == 1) 
				cout << "no" << endl;
			else
				cout << "yes" << endl;

		} else {

			for (int i = 0; i < N; ++i)
			{
				for (int j = 0; j < M; ++j)
				{
					if(a[i][j] == 'A' && i != 0) {
						if(a[i][j] == 'A') {
							if(a[i-1][j] == 'B' || a[i-1][j] == 'W') {
								flag = 1;
								break;
							}
						}
					}
					if(a[i][j] == 'W') {
						if(j == 0 || j == M-1 || i == N-1) {
							flag = 1;
							break;
						}
						if(a[i][j-1] == 'A' || a[i][j+1] == 'A' || a[i+1][j] == 'A') {
							flag = 1;
							break;
						}
					} 
				}

				if(flag == 1)
					break;
			}
			if(flag == 1) 
				cout << "no" << endl;
			else
				cout << "yes" << endl;
		}
	}
	return 0;
}