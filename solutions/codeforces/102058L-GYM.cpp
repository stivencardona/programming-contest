#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string s, pal = ""; cin >> s; 
    int k; cin >> k;
    bool state = true;
    for(int i = 0; i < s.size();i++) if(s[i] != s[s.size() - i - 1]) state = false;
    cout << ((state) ?"YES\n" : "NO\n" );
    return 0;
}
