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
#define rep(i,a,n) for (int i=a;i<=n;i++)
#define per(i,n,a) for (int i=n;i>=a;i--)
using namespace std;
long long int a[500000];
int main() {
	ios::sync_with_stdio(0);
  int response = 0;

  // Let's go and try to minimize the value of K.
  // hi, computer i'll give you 100 Laddu, tell me which one is heavier :P
  // Let me know what you think about my offer.
  // if NO, what about 100*10 Laddus.
  // Still NO, ok then i'll do it by myself. :D

  cout<<"1"<<endl;fflush(stdout);
  cout<<"3 1 1 2"<<endl;fflush(stdout);
  cout<<"3 3 3 4"<<endl;fflush(stdout);

  cin >> response;

  if(response == 0) {
    cout<<"2"<<endl;fflush(stdout);
    cout<<"5"<<endl;fflush(stdout);
  } else {
    if(response > 0) {
      // In this case, either ball one is heavy or ball two.

      if(response == 2) {
        // Ball one is heavy, huh! computer i found out without your help!
        cout<<"2"<<endl;fflush(stdout);
        cout<<"1"<<endl;fflush(stdout);
      } else {
        // Ball two is heavy, huh! computer i found out without your help!
        cout<<"2"<<endl;fflush(stdout);
        cout<<"2"<<endl;fflush(stdout);
      }

    } else {
      // In this case, either ball three is heavy or ball four.

      if(response == -2) {
        // Ball three is heavy, huh! computer i found out without your help!
        cout<<"2"<<endl;fflush(stdout);
        cout<<"3"<<endl;fflush(stdout);
      } else {
        // Ball four is heavy, huh! computer i found out without your help!
        cout<<"2"<<endl;fflush(stdout);
        cout<<"4"<<endl;fflush(stdout);
      }
    }
  }

  // so at value of K will be 1 or 2 that means 100 or 50.
  //note : program updated. 
  // will update the program.

	return 0;
}
