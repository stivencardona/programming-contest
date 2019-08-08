#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string a, b; cin >> a >> b;
  if(a.size() < b.size()) cout << "LESS\n";
  else if( a.size() > b.size()) cout << "GREATER\n";
  else{
    int id = -1;
    for(int i = a.size() - 1 ; i >= 0; i--) id = (a[i] != b[i])? i : id;
    if(id == -1) cout << "EQUAL\n";
    else if(a[id] < b[id]) cout << "LESS\n";
    else if(a[id] > b[id]) cout << "GREATER\n";
  }
  return 0;
}