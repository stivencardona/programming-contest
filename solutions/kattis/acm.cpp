#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int t;
  char p;
  string s;
  vi dat(27, 0);
  int ans = 0;
  int r = 0;
  while ((cin >> t >> p >> s) && t != -1) {
    if(dat[ p - 'A'] == -1) continue;
    if( s == "right") {
      r++;
      ans += 20 * dat[p - 'A'] + t;
      dat[ p - 'A'] = -1;
    }
    if( s == "wrong") dat[ p - 'A']++;
  }
  cout << r << " " << ans << "\n";
  return 0;
}