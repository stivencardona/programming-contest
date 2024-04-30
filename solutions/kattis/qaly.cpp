#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;scanf("%d", &n);
  double ans = 0.0;
  while(n--) {
    double q,y;scanf("%lf %lf", &q, &y);
    ans += (q * y);
  }
  printf("%lf\n", ans);
  return 0;
}