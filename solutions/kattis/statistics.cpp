#include <bits/stdc++.h>

using namespace std;

int main() { 
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n, c = 1;
  while(scanf("%d", &n) != EOF){
    int min = 1e8, max = -1e8;
    while(n--) {
      int x; scanf("%d", &x);
      if( x < min) min = x;
      if( x > max) max = x;
    }
    printf("Case %d: %d %d %d\n", c++, min, max, max - min);
  }
  return 0;
}