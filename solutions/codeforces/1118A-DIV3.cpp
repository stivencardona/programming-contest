#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int q; cin >> q;
  while(q--){
    long long n, a,b; cin >> n >> a >> b;
    if( a * 2 < b) cout << a * n << "\n";
    else cout << n/2 * b + (n%2)*a << "\n";
  }
return 0;
}