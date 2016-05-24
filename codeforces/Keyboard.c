/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/
#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define mod 1000000007
char a[102];
char r1[] = {'q','w','e','r','t','y','u','i','o','p'};
char r2[] = {'a','s','d','f','g','h','j','k','l',';'};
char r3[] = {'z','x','c','v','b','n','m',',','.','/'};
int main() {
  char input;
  scanf("%c",&input);
  int i, j;

  if(input == 'L') {
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++) {
      if(a[i] == 'q' || a[i] == 'w' || a[i] == 'e' || a[i] == 'r' || a[i] == 't' || a[i] == 'y' || a[i] == 'u' || a[i] == 'i' || a[i] == 'o' || a[i] == 'p' ) {
        for(j=0;j<10;j++) {
          if(r1[j] == a[i]) {printf("%c",r1[j+1]);}
        }
      }
      else if(a[i] == 'a' || a[i] == 's' || a[i] == 'd' || a[i] == 'f' || a[i] == 'g' || a[i] == 'h' || a[i] == 'j' || a[i] == 'k' || a[i] == 'l' || a[i] == ';' ) {
        for(j=0;j<10;j++) {
          if(r2[j] == a[i]) {printf("%c",r2[j+1]);}
        }
      }
      else {
        for(j=0;j<10;j++) {
          if(r3[j] == a[i]) {printf("%c",r3[j+1]);}
        }
      }
    }
  }
  else if(input == 'R') {
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++) {
      if(a[i] == 'q' || a[i] == 'w' || a[i] == 'e' || a[i] == 'r' || a[i] == 't' || a[i] == 'y' || a[i] == 'u' || a[i] == 'i' || a[i] == 'o' || a[i] == 'p' ) {
        for(j=0;j<10;j++) {
          if(r1[j] == a[i]) {printf("%c",r1[j-1]);}
        }
      }
      else if(a[i] == 'a' || a[i] == 's' || a[i] == 'd' || a[i] == 'f' || a[i] == 'g' || a[i] == 'h' || a[i] == 'j' || a[i] == 'k' || a[i] == 'l' || a[i] == ';' ) {
        for(j=0;j<10;j++) {
          if(r2[j] == a[i]) {printf("%c",r2[j-1]);}
        }
      }
      else {
        for(j=0;j<10;j++) {
          if(r3[j] == a[i]) {printf("%c",r3[j-1]);}
        }
      }
    }
  } else {
    // case 3
    printf("IN\n");
  }
	return 0;
}
