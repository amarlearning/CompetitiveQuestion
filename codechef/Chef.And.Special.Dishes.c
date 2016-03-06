#include <string.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14159
#define LL long long
#define mod 1000000007
int main() {
	long long int d;
	scanf("%lld",&d);
	while(d--) {
    long long int i=0,l=0,count[30]={0},flag=0,t=-1,p=0,secondhalf=0;
    long long int j=0,mid=0,cnt=0,temp=0,who=0,firsthalf=0,z=0;
    char a[1000020],b[1000020];
    scanf("%s",&a);
    l = strlen(a);
    if(l==1) {printf("NO\n");}
    else {
      mid = (l/2);
      for(i=0;i<l;i++) {
        temp = (int)a[i] - 96;
        count[temp]++;
      }
      for(i=0;i<30;i++) {
        if(count[i]%2==1){flag++;who=i+96;}
      }
      if(flag > 1) {printf("NO\n");}
      else {
        for(i=0;i<mid;i++) {
          if(who == ((int)a[i])) {firsthalf++;}
        }
        for(i=mid;i<l;i++) {
          if(who == ((int)a[i])) {secondhalf++;}
        }
        if(secondhalf >= firsthalf) {
          i=0;
          j = mid = (l/2);
          if(l%2==0) {
            while(1) {
              if(i<mid && j<l) {
                if(a[i] != a[j]) {cnt=10;break;}
                else {i++;j++;}
              }
              else{break;}
            }
          }
          else {
            while(1) {
              if(i<mid && j<l) {
                if(a[i] != a[j]) {cnt++;j++;}
                else {i++;j++;}
              }
              else{break;}
            }
            while(j<l){cnt++;j++;}
          }
          l = l - cnt;
          if(cnt < 2 && l%2==0) {printf("YES\n");}
          else {
          while(a[++t]!='\0');
          while(t>=0)
          b[p++] = a[--t];
          b[p]='\0';
          strcpy(a,b);
          l = strlen(a);
          i=0;
          j = mid = (l/2);
          cnt=0;
          if(l%2==0) {
            while(1) {
              if(i<mid || j<l) {
                if(a[i] != a[j]) {cnt=10;break;}
                else {i++;j++;}
              }
              else{break;}
            }
            while(j<l){cnt++;j++;}
          }
          else {
            while(1) {
              if(i<mid && j<l) {
                if(a[i] != a[j]) {cnt++;j++;}
                else {i++;j++;}
              }
              else{break;}
            }
            while(j<l){cnt++;j++;}
          }
          l = l - cnt;
          if(cnt < 2 && l%2==0) {printf("YES\n");}
          else {printf("NO\n");}}
        }
        else {
          while(a[++t]!='\0');
          while(t>=0)
          b[p++] = a[--t];
          b[p]='\0';
          strcpy(a,b);
          i=0;
          j = mid = (l/2);
          if(l%2==0) {
            while(1) {
              if(i<mid || j<l) {
                if(a[i] != a[j]) {cnt=10;break;}
                else {i++;j++;}
              }
              else{break;}
            }
            while(j<l){cnt++;j++;}
          }
          else {
            while(1) {
              if(i<mid && j<l) {
                if(a[i] != a[j]) {cnt++;j++;}
                else {i++;j++;}
              }
              else{break;}
            }
            while(j<l){cnt++;j++;}
          }
          l = l - cnt;
          if(cnt < 2 && l%2==0) {printf("YES\n");}
          else {printf("NO\n");}
        }
      }
    }
  }
	return 0;
}
