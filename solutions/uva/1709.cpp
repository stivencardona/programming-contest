#include <bits/stdc++.h>

using namespace std;


double price(double k, double p, double a, double b, double c, double d) {
  return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int p,a,b,c,d,n;
  while(scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n) != EOF) {
    vector<double> vd(n);
    int i = 1;
    for(double &curr: vd) {
      curr = price((double)i++, (double)p,(double)a,(double)b,(double)c,(double)d);
    } 
    double ans = 0;
    double mx = vd[0];
    for(double &curr: vd) {
      ans = max(ans, mx - curr);
      mx = max(mx, curr);
    }
    cout << setprecision(9) << fixed << ans << "\n";
  }
  return 0;
}