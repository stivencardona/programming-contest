#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> st(9);
    st[0] = 111, st[1] = 222, st[2] = 333, st[3] = 444,st[4] = 555,st[5] = 666,st[6] = 777,st[7] = 888,st[7] = 999;    
    cout << st[lower_bound(st.begin(), st.end(), n) - st.begin()] << "\n";
    return 0;        
}