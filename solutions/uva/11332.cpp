#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

ll digit(ll a) {
  if( a < 10) {
    return a;
  }
  ll ans = 0;
  while( a ) {
    ans += a % 10;
    a /= 10;
  }
  return digit(ans);
}

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  ll n;
  while(scanf("%lld", &n) && n) {
    printf("%lld\n", digit(n));
  }
  return 0;
}