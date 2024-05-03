#include <bits/stdc++.h>

using namespace std;


int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int t;scanf("%d", &t);
  while(t--){
    int n;scanf("%d", &n);
    n--; 
    int mx, ans = -1e8; scanf("%d", &mx);
    while(n--) {
      int i; scanf("%d", &i);
      ans = max(ans, mx - i);
      mx = max(mx, i);
    }
    printf("%d\n", ans);
  }
  return 0;
}