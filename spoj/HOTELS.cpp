/*
	Author : Amar Prakash Pandey
	contact : http://amarpandey.me
*/

#include <bits/stdc++.h>

#define ll long long
#define MAX 1000005

using namespace std;

ll int A[MAX];

int main(int argc, char const *argv[]) {

	ll int N, M, sum = 0;
	scanf("%lld %lld", &N, &M);

	for (ll int i = 0; i < N; ++i) {
		scanf("%lld", &A[i]);
	}

	ll int l = 0, r = 0, ans = 0;

	while(l < N) {

		while(r < N && (sum + A[r]) <= M) {
			sum += A[r];
			r++;
		}
		ans = max(ans, sum);
		sum -= A[l];
		l++;

	}

	printf("%lld\n", ans);

	return 0;
}
