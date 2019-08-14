#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int n; cin >> n;
  vector<int> a(n);
  vector<int> even(n + 2,0);
  for(int &i : a) cin >> i;
  for(int i = 0; i < n  ; i++){
    even[i + 2] = even[(i + 2) - 2] + a[i];
  }
  long long e = (n % 2) ? even[even.size() - 1] : even[even.size() - 2];
  long long o = (n % 2) ? even[even.size() - 2] : even[even.size() - 1];
  long long ans = 0;
  for(int i = 2; i < even.size(); i++){
    if(!(i % 2)){
      if(e - even[i] + even[i-1] == o - even[i-1] + even[i-2]) ans++;
    }
    else{
      if(o - even[i] + even[i-1] == e - even[i-1] + even[i-2]) ans++;
    }
  }
  cout << ans << "\n";
return 0;
}