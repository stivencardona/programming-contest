#include <bits/stdc++.h>
using namespace std;

int main() { 
  int t;scanf("%d", &t);
  int c = 1;
  while(t--) {
    int n;scanf("%d", &n);
    bool f = false; 
    int sz = 100;
    int x = 0, y = 0;
    int prev = n, next; 
    while(n--) {
      scanf("%d", &next);
      if( next > prev && f) {
        x++;
      }
      if( next < prev && f) {
        y++;
      }
      f = true;
      prev = next;
    }
    printf("Case %d: %d %d\n", c, x, y);
    c++;
  }
  return 0;
}