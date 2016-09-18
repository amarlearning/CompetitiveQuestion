#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct array {
	long int x,y;
};

bool compare(array a, array b) {
	return a.x < b.x;
}

int main() {
	long int t,z;
	scanf("%ld",&t);
	for(z=0;z<t;z++) {
		array score[110];
		long int N, position=0;
		long int max=-1, tie=0;
		scanf("%ld",&N);
		for(int i=1;i<=N;i++) {
			score[i].y=i;
		}
		for(int i=0;i<N;i++) {
	        long int C, temp=0, xscore=0, anmol=0;
	        long int count[10]={0};
	        scanf("%ld",&C);
	        xscore = C;
	        for(int j=0;j<C;j++) {
	                   scanf("%ld",&temp);
	                   count[temp]++;
	        }
	        sort(count+1,count+7);
	        if(count[1]!=0){
				xscore += (count[1]*4);
				anmol = count[1];
				for(int k=1;k<=6;k++) {
				        count[k] -= anmol;
				}
	        }
	        if(count[2]!=0){
				xscore += (count[2]*2);
				anmol = count[2];
				for(int k=2;k<=6;k++) {
				        count[k] -= anmol;
				}
	        }
	        if(count[3]!=0){
				xscore += (count[3]*1);
				anmol = count[3];
				for(int k=3;k<=6;k++) {
				        count[k] -= anmol;
				}
	        }
	        score[i+1].x = xscore;
		}
		sort(score+1, score+N+1, compare);
		if(score[N-1].x == score[N].x) {
			printf("tie\n");
		} else {
			if(score[N].y == 1) {
				printf("chef\n");
			} else {
				printf("%d\n",score[N].y);
			}
		}
	}
	return 0;
}
