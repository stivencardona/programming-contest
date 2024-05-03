#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n; cin >> n;
  vector<string> vs(n);
  for(string &s: vs) cin >> s;
  
  bool is_sorted = true;
  
  for(int i = 1; i < n; i++) is_sorted = is_sorted && (vs[i] >= vs[i-1]);
  if(is_sorted){ 
    cout << "INCREASING\n";
    return 0;  
  }
  is_sorted = true;
  for(int i = 1; i < n; i++) is_sorted = is_sorted && (vs[i] <= vs[i-1]);
  if(is_sorted){
    cout << "DECREASING\n";
    return 0;
  } 

  cout << "NEITHER\n";
  return 0;
}