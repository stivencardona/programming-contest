#include <bits/stdc++.h>

using namespace std;
int main(){
  int x;scanf("%d", &x);
  int n;scanf("%d", &n);
  int ans = x;
  while(n--){
    int p; scanf("%d", &p);
    ans += (x - p);
  }
  printf("%d\n", ans);
  return 0;
}