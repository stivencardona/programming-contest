#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long w1,h1,w2,h2; cin >> w1 >> h1 >> w2 >> h2;
    long long ans = 2LL*(w1 + h1 + h2 + 2LL);
    cout << ans << "\n";
    return 0;
}