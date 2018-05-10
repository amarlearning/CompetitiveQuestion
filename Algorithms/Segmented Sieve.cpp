/*
        Author : Amar Prakash Pandey
        contact : http://amarpandey.me
*/
#include <bits/stdc++.h>
using namespace std;

vector<long long int> prime;

int marks[100000] = {1};

void SimpleSieve(long long int limit) {
  bool mark[limit + 1];
  memset(mark, true, sizeof(mark));

  for (long long int p = 2; p * p < limit; p++) {
    if (mark[p] == true) {
      for (long long int i = p * 2; i < limit; i += p) {
        mark[i] = false;
      }
    }
  }

  for (long long int i = 2; i < limit; i++) {
    if (mark[i] == true) {
      prime.push_back(i);
    }
  }
}

int main() {
  long long int N = 1000000000, T;
  long long int limit = floor(sqrt(N)) + 1;

  SimpleSieve(limit);
  scanf("%lld", &T);

  while (T--) {
    long long int lowx, highy;
    scanf("%lld%lld", &lowx, &highy);

    if (lowx == 1) lowx = 2;

    long long int length = prime.size() - 1;

    if (highy <= prime[length]) {
      for (long long int i = 0; i < prime.size(); i++) {
        if (prime[i] >= lowx && prime[i] <= highy) {
          printf("%lld\n", prime[i]);
        }
      }

    } else {
      for (long long int k = 0; k <= 100000; k++) {
        marks[k] = 1;
      }

      for (long long int i = 0; i < prime.size(); i++) {
        long long int loLim = floor(lowx / prime[i]) * prime[i];
        if (loLim < lowx) loLim += prime[i];

        for (long long int j = loLim; j <= highy; j += prime[i]) {
          marks[j] = 0;
        }
      }

      for (long long int i = lowx; i <= highy; i++) {
        if (marks[i] == 1) {
          printf("%lld\n", i);
        }
      }
    }
    printf("\n");
  }
  return 0;
}
