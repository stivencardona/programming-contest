#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long n,m,a,b,ans;
    cin >> n >> m >> a;
    m--;
    ans = a - 1;
    while(m--){
        cin >> b;
        ans += (b >= a) ? b - a : n - a + b;
        a = b;
    }
    cout << ans << "\n";
    return 0;
}
