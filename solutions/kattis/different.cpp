#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  ll a, b; 
  while(scanf("%lld %lld", &a, &b) != EOF) {
    printf("%lld\n", abs(a - b));
  }
  return 0;
}