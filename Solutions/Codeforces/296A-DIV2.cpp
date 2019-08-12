#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n; cin >> n;
    vector<int> DAT(1001,0); 
    for(int i  = 0 ; i < n; i++){
        int tmp; cin >> tmp;
        DAT[tmp]++;
    }
    sort(DAT.begin(), DAT.end(), greater<int>());
    cout << (( DAT[0] <= (n + 1) / 2)? "YES\n" : "NO\n");
    return 0;
}