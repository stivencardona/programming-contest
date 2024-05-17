#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int c, t; cin >> c >> t;
  int ans = 0;
  while(t--) {
    string s;
    int g;
    cin >> s >> g;
    if(s == "enter") {
      if(g <= c) c -= g;
      else ans++;
    } else {
      c += g;
    }
  }
  cout << ans << "\n";
  return 0;
}