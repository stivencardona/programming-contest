#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
  
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;cin >> n;
    vector<ll> st(n);
    for(ll &i : st) cin >> i;
    int m; cin >> m;
    ll mx = 0;
    while(m--){
        ll w, h; cin >> w >> h;
        mx = max(mx,st[w - 1]);
        cout << mx << "\n";
        mx += h;
    }
    return 0;
}