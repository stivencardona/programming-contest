#include <bits/stdc++.h>
using namespace std;

int main() { 
  int t;scanf("%d", &t);
  while(t--) {
    long long n;scanf("%lld", &n);
    long long ans = (sqrt(1 + 4 * 2 * n) - 1) / 2;
    printf("%lld\n", ans);
  }
  return 0;
}