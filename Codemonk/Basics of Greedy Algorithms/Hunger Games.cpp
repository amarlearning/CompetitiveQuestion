/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <bits/stdc++.h>
using namespace std;
 
#ifndef ll
	#define ll long long
#endif

vector <ll int> vec;

int main(int argc, char const *argv[]) {

		ll int N, temp, cnt = 0;
		scanf("%lld", &N);
		
		for(int i=0; i < N; i++) {
			cin >> temp;
			vec.push_back(temp);
		}
		
		sort(vec.begin(), vec.end());
		
		temp = 0;
		
		for(int i=0; i < vec.size()-3; i++) {
			if(i == 0) {
				if(temp < (vec.at(i+1) - vec.at(i)))
					temp = vec.at(i+1) - vec.at(i);
				else if(temp < (vec.at(i+2) - vec.at(i)))
					temp = vec.at(i+2) - vec.at(i);
			} else {
				if(temp < (vec.at(i+2) - vec.at(i)))
					temp = vec.at(i+2) - vec.at(i);
			}
		}
		
		if(temp < (vec.at(vec.size()-1) - vec.at(vec.size()-2) ))
			temp = vec.at(vec.size()-1) - vec.at(vec.size()-2);
		if(temp < (vec.at(vec.size()-1) - vec.at(vec.size()-3) ))
			temp = vec.at(vec.size()-1) - vec.at(vec.size()-3);
			
		cout << temp << endl;
		
		vec.clear();
	
	return 0;
}