#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    vector<int> v(n);
    vector<int> c(n);
    for(int &i : v) cin >> i;
    for(int &i : c) cin >> i;
    int ans = 0;
    for(int i = 0; i < n; i++) ans += (v[i] - c[i] > 0) ? v[i] - c[i] : 0;
    cout << ans << "\n";
    return 0;
}