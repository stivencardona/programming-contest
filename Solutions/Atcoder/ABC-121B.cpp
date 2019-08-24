#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,c; cin >> n >> m >> c;
    vector<int> b(m);
    vector<vector<int>> a(n,vector<int>(m));
    for(int &i : b) cin >> i;
    for(auto &v : a)
        for(int &i : v)
            cin >> i;
    int cnt = 0;
    for(auto v : a){
        int val = 0;
        for(int i = 0;i < v.size();i++)
            val += v[i]*b[i];
        cnt += (val > -c);
    }
    cout << cnt << "\n";
    return 0;
}