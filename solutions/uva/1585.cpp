#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int t; cin >> t;
  while(t--) {
    string s; cin >> s;
    int ans = 0;
    int count = 0;
    for(char &c: s) {
      if( c == 'O') ans += ++count;
      if( c == 'X') count = 0;
    }
    cout << ans << "\n";
  }
  return 0;
}