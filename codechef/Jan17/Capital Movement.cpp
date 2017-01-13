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

struct reference {
	long long int index, value;
};
 
bool compare(reference a, reference b) {
	return a.value > b.value;
}

int main(int argc, char const *argv[]) {
	int T;
	cin >> T;
	
	while(T--) {
		LL int Number, V, U;
		reference pp[50050];
		cin >> Number;
		for (int i = 0; i < Number; ++i) {
			cin >> pp[i].value;
			pp[i].index = i;
		}
		
		sort(pp, pp+Number, compare);
		
		vector<LL int> vc[50050];
		for (int i = 0; i < Number-1; ++i) {
			LL int V, U;
			cin >> V >> U;
			vc[V-1].push_back(U);
			vc[U-1].push_back(V);
			vc[V-1].push_back(V);
			vc[U-1].push_back(U);
		}

		for (int i = 0; i < Number; ++i) {
			sort( vc[i].begin(), vc[i].end() );
			vc[i].erase( unique( vc[i].begin(), vc[i].end() ), vc[i].end() );
		}
        int j, flag;
		for (int i = 0; i < Number; ++i) {

			for (j = 0; j < Number; ++j) {
				

				int flag = 0;

				for (int k = 0; k < vc[i].size(); ++k)
				{
					if(vc[i][k] == pp[j].index + 1) {
						flag = 1;
						break;
					}
				}

				if(flag == 0) {
					break;
				}

			}

			if(flag == 0) {
				cout << pp[j].index + 1 << " ";
			} else {
				cout << "0 ";
			}
		}
		cout << endl;
	}
	return 0;
}