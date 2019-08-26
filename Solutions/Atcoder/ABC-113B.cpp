#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, t; double a;cin >> n >> t >> a;
    int idx = 0;
    double mn = 1e9;
    for(int i = 0; i < n ; i++){
        double aux; cin >> aux;
        if(abs(a - (t - aux*0.006 )) < mn){
            idx = i;
            mn = abs(a - (t - aux*0.006 ));
        }
    }
    cout << idx + 1 << "\n";
    return 0;        
}