#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int a, b, c; cin >> a >> b >> c;
  if(a > b) swap(a,b);
  if(b > c) swap(b,c);
  if(a > b) swap(a,b);
  int d1 = b - a, d2 = c - b;
  if(d1 == d2) cout << c + d1 << "\n";
  if(d1 > d2) cout << a + (d1 >> 1) << "\n";
  if(d2 > d1) cout << c - (d2 >> 1) << "\n";
  return 0;
}