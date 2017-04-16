/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <bits/stdc++.h>
using namespace std;

#ifndef ll
	#define ll long long
#endif

int main(int argc, char const *argv[]) {

	string s;
	cin >> s;
	
	for(int i=0; i < s.length(); i++) {
		
		if(s[i] == '?') {
			if(i == 0) {
				if(s[i + 1] == 'a')
					s[i] = 'b';
				else
					s[i] = 'a';
			} else {
				if(s[i-1] == 'a' || s[i+1] == 'a') {
					s[i] = 'b';
				} else {
					s[i] = 'a';
				}
			}
		}
	}
	
	cout << s;
	
	return 0;
}