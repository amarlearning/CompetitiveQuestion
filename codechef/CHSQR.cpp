/*
    Author : Amar Prakash Pandey
    contact : http://amarpandey.me
*/
#include <bits/stdc++.h>
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
 
int main(int argc, char const *argv[]) {
    long int T;
    scanf("%ld",&T);
    while(T--) {
        long int K, a[500];
        scanf("%ld",&K);
        long int ch = (K+1)/2;

        // preparing array to print!
        for(long int i=1; i <= K; i++) {
            a[i] = ch;
            ch -= 1;
            if(ch == 0) {
                ch = K;
            }
        }

        // printing the resultant matrix!
        for(long int i = 1; i <= K; i++) {
            for(long int j = 1; j <= K; j++) {
                printf("%ld ",a[j]);
                a[j] -= 1;
                if(a[j] == 0) {
                    a[j] = K;
                }
            }
            printf("\n");
        }
    }
    return 0;
}
