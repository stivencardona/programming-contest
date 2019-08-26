#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m; cin >> n >> m;
    int _n = n;
    map<int,int> mapper;
    while(n--){
        int sz; cin >> sz;
        while(sz--){
            int curr; cin >> curr;
            mapper[curr]++;
        }
    }
    int ans = 0;
    for(auto i : mapper) ans += (i.second == _n);
    cout << ans << "\n";
    return 0;
}