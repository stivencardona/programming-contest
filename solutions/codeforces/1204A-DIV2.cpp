#include <bits/stdc++.h>

using namespace std;

int main(){
    string s; cin >> s;
    int numOnes = 0;
    for(char c : s) numOnes += (c == '1');
    int ans = (s.size() - 1) / 2;
    cout << ans + (numOnes > 1 || (s.size() - 1) % 2) << "\n";
    return 0;
}