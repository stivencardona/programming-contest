#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s; cin >> s;
    set<int> dict;
    int ans = 1;
    while(dict.find(s) == dict.end()){
        dict.insert(s);
        if(s % 2) s = 3 * s + 1;
        else s /= 2 ;
        ans++;
    }
    cout << ans << "\n";
    return 0;        
}