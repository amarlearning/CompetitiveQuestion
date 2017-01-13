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
#ifndef L
	#define L long
#endif
 
struct reference {
	long long int start, end;
};

LL int sideOne[100000]={0};
LL int sideTwo[100000]={0};

int main(int argc, char const *argv[]) {
	LL int N, E, flag = 0, temp;
	cin >> N >> E;
	reference game[200000], demo[200000], mix[200000];
	for (L int i = 0; i < E; ++i) {
		cin >> game[i].start >> game[i].end;
	}
	if(E < N) {
		cout << "NO";
	} else {
		for (L int i = 0; i < E; ) {
			if(i == E-1){
				if(game[i].end == game[0].start) {
					i++;
				} else {
					if(game[i].end == game[0].end) {
						temp = game[0].end;
						game[0].end = game[0].start;
						game[0].start = temp;
						i++;
					}
					else {
						flag = 1;
						break;
					}
				}
			} else {
				if(game[i].end == game[i+1].start) {
					i++;
				} 
				else {
					if(game[i].end == game[i+1].end) {
						temp = game[i+1].end;
						game[i+1].end = game[i+1].start;
						game[i+1].start = temp;
						i++;
					}
					else {
						flag = 1;
						break;
					}
				}				
			}
		}
		if(flag == 1) {
			if(N < 21) {
				flag = 0;
				for (int i = 1; i <= N; ++i)
				{
					if(sideOne[i] != sideTwo[i]) {
						flag = 1;
						break;
					} 
				}
				if(flag == 1) {
					cout << "NO";
				} else {
					cout << "YES" << endl;
					for (int i = 0; i < E; ++i)
					{
						cout << game[i].start << " " << game[i].end << endl;
					}
				}
			} else {
				for (L int i = 0; i < E; ) {
					if(i == E-1){
						if(demo[i].start == demo[0].end) {
							i++;
						} else {
							if(demo[i].start == demo[0].start) {
								temp = demo[0].start;
								demo[0].start = demo[0].end;
								demo[0].end = temp;
								i++;
							}
							else {
								flag = 1;
								break;
							}
						}
					} else {
						if(demo[i].start == demo[i+1].end) {
							i++;
						} 
						else {
							if(demo[i].start == demo[i+1].start) {
								temp = demo[i+1].start;
								demo[i+1].start = demo[i+1].end;
								demo[i+1].end = temp;
								i++;
							}
							else {
								flag = 1;
								break;
							}
						}				
					}
				}
				if(flag == 1) {
					flag = 0;
					for (int i = 1; i <= N; ++i)
					{
						if((sideOne[i] + sideTwo[i])%2 != 0) {
							flag = 1;
							break;
						} 
					}
					if(flag == 1) {
						cout << "NO";
					} else {
						cout << "YES" << endl;
						for (int i = 0; i < E; ++i)
						{
							cout << mix[i].start << " " << mix[i].end << endl;
						}
					}
				} else {
					cout << "YES" << endl;
					for (int i = 0; i < E; ++i)
					{
						cout << demo[i].start << " " << demo[i].end << endl;
					}
				}
			}
		} else {
			cout << "YES" << endl;
			for (int i = 0; i < E; ++i)
			{
				cout << game[i].start << " " << game[i].end << endl;
			}
		}
	}
	return 0;
} 