#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,b;
    while(cin >> s >> b && s + b){
        int nxt[s + 1], prev[s + 1];
        for(int i = 1; i <= s; i++)nxt[i] = i+1,prev[i] = i-1;
        while(b--){
            int l,r; cin >> l >> r;
            nxt[prev[l]] = nxt[r];
            prev[nxt[r]] = prev[l];
            if(prev[l] == 0 ) cout << "* ";
            else cout << prev[l] << " ";
            if(nxt[r] == s + 1) cout << "*\n";
            else cout << nxt[r] << "\n";
        }
        cout << "-\n";
    }
    return 0;
}