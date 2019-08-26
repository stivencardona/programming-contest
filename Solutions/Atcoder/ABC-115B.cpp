#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int sum, mx;
    sum = mx = 0;
    while(n--){
        int aux; cin >> aux;
        mx = max(aux, mx);
        sum += aux;
    }
    cout << sum - (mx / 2) << "\n";
    return 0;        
}