#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int l,r,ans; ans = l = r = 0;
    while(l < s.size()){
        r = l;
        while(r < s.size() && (s[r] == 'A' || s[r] == 'C' || s[r] == 'G' || s[r] == 'T')) r++;
        ans = max(r - l, ans);
        l = r + 1;
    }
    cout << ans << "\n";
    return 0;
}