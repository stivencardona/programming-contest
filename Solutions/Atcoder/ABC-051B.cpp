#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,s; cin >> k >> s;
    ll ans = 0;
    for(int i = 0; i <= k; i++)
    for(int j = 0; j <= k; j++)
        if(s - i - j >= 0 && s - i - j <= k) ans++;
    cout << ans << "\n";
}