/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[8][8];
int main() {
	int i, j, x=0;
	int white=0, black=0;
	for(i=0;i<8;i++) {
			scanf("%s",&a[i]);
	}
	for(i=0;i<8;i++) {
		for(j=0;j<8;j++) {
			x = (int)a[i][j];
			if(x >= 65 && x <= 90) {
				if(a[i][j] == 'Q') {white+=9;}
				if(a[i][j] == 'R') {white+=5;}
				if(a[i][j] == 'B') {white+=3;}
				if(a[i][j] == 'N') {white+=3;}
				if(a[i][j] == 'P') {white+=1;}
			}
			else if(x >= 97 && x <= 122) {
				if(a[i][j] == 'q') {black+=9;}
				if(a[i][j] == 'r') {black+=5;}
				if(a[i][j] == 'b') {black+=3;}
				if(a[i][j] == 'n') {black+=3;}
				if(a[i][j] == 'p') {black+=1;}
			}
			else {
				// execute this comment if you can .. :p
			}
		}
	}
	if(black == white) {printf("Draw");}
	else if(black > white) {printf("Black");}
	else {printf("White");}
	return 0;
}
