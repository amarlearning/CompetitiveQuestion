/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <iostream>
#include <vector>
using namespace std;
 
#ifndef ll
    #define ll long long
#endif
 
vector <ll int> vec;
 
int main(int argc, char const *argv[])
{
	long int T;
	cin >> T;
	while(T--) {
	    
	    ll int N, K, temp, flag = 0, i;
	  
	    scanf("%lld %lld", &N, &K);
	    
	    K = K % N;
	        
	    for(int i = 1; i <= N; i++) {
	        
	        scanf("%lld", &temp);
	        vec.push_back(temp);
	    }
	    
	    if(K == 0) {
	        for(ll int j=0; j < vec.size(); j++)
	            printf("%lld ", vec.at(j));
	    } else {
	        i = N - K;
    	    while(flag < N) {
    	        printf("%lld ", vec.at(i));
    	        if(i == N-1)
    	            i = 0;
    	        else
    	            i++;
    	            
    	        flag++;
    	    }
	    }
	    printf("\n");
	    vec.clear();
	} 
	return 0;
}