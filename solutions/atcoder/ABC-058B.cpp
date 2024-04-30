#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string o,e; cin >> o >> e;
  for(int i = 0; i < min(e.size(),o.size());i++) cout << o[i] << e[i];
  for(int i = o.size(); i < e.size(); i++) cout << e[i];
  for(int i = e.size(); i < o.size(); i++) cout << o[i];
  cout << "\n";
  return 0;
}