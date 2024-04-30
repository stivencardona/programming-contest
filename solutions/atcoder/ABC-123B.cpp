#include <bits/stdc++.h>

using namespace std;

int main(){
    int MX, ans;
    MX = ans = 0;
    for(int i = 0; i < 5; i++){
        int curr; cin >> curr;
        ans += curr + (10 * (curr % 10 != 0) - (curr % 10));
        MX = max(MX, 10 * (curr % 10 != 0) - (curr % 10));
    }
    cout << ans - MX << "\n";
    return 0;
}