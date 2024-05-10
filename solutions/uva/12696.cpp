#include <bits/stdc++.h>

using namespace std;

int main() { 
  int t; scanf("%d", &t);
  int ans = 0;
  while( t-- ) {
    float l, w, d, e; scanf("%f %f %f %f", &l, &w, &d, &e);
    if(((l <= 56.00 && w <= 45.00 && d <= 25.00) || l + w + d <= 125.00) && e <= 7.00) {
      printf("1\n");
      ans++;
    } else {
      printf("0\n");
    }
  }
  printf("%d\n", ans);
  return 0;
}