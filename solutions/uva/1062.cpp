#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  string containers; cin >> containers;
  int t = 1;
  while(containers != "end") {
    vector<char> vc;
    for(char &container : containers) {
      if(vc.empty()) {
        vc.push_back(container);
      } else {
        bool can = false;
        for(char &c : vc) {
          if( container <= c) { 
            c = container;
            can = true;
            break; 
          }
        }
        if(!can) {
          vc.push_back(container);
        }
      }
    }
    cout << "Case " << t++ << ": " << vc.size() << "\n";
    cin >> containers;
  }
  return 0;
}