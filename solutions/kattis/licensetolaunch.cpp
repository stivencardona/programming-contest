#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() { 
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n; scanf("%d", &n);
  int c = 0;
  int ans = 0;
  ll min = 1e10;
  while(n--){
    ll i; scanf("%lld", &i);
    if( i < min) {
      ans = c;
      min = i;
    }
    c++;
  }
  printf("%d\n", ans);
  return 0;
}