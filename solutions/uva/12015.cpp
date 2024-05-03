#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int t; cin >> t;
  int c = 0;
  while(t--) {
    vector<pair<string, int>> vsi(10);
    for(pair<string, int> &si: vsi) {
      string s;
      int i;
      cin >> s >> i;
      si = pair<string, int>(s, i);
    }
    int mx = -1e9;
    for(pair<string, int> &si: vsi) mx = max(mx, si.second);
    cout << "Case #"<< ++c << ":\n"; 
    for(pair<string, int> &si: vsi){
      if (mx == si.second) {
        cout << si.first << "\n";
      };
    } 
  }
  return 0;
}