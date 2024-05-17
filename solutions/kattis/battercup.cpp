#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int t; cin >> t;
  double n = 0;
  double ans = 0;
  while(t--){
    double i; cin >> i;
    ans += i * (i >= 0);
    n += ( i >= 0);
  }
  ans = ans / n;
  cout << ans << "\n";
  return 0;
}