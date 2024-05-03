#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n; cin >> n;
  n--;
  vi l(n);
  for(int i = 1; i <= n; i++){
    int j; cin >> j;
    l[j] = i;
  }
  cout << 1 << " ";
  for(int i: l) cout << i + 1 << " ";
  cout << "\n";
}