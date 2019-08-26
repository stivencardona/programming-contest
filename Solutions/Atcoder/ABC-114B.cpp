#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s; cin >> s;
    int mn = 1e9;
    for(int i = 0; i < s.size() - 2;i++){
        int curr = stoi(s.substr(i, 3));
        mn = min(mn, abs(curr - 753));
    }
    cout << mn << "\n";
    return 0;        
}