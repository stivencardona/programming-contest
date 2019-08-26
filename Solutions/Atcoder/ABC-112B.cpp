#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t; cin >> n >> t;
    vector<pair<int,int>> st(n);
    for(auto &i : st) cin >> i.first >> i.second;
    sort(st.begin(), st.end());
    for(int i = 0; i < n; i++){
        if(st[i].second <= t){
            cout << st[i].first << "\n";
            return 0;
        }
    }
    cout << "TLE\n";
    return 0;        
}