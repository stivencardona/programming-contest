#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    double jpy, btc;
    jpy = btc = 0.0;
    for(int i = 0; i < n; i++){
        double val;
        string s;
        cin >> val >> s;
        if(s == "JPY") jpy += val;
        else btc += val; 
    }
    cout << setprecision(5) << fixed << jpy + btc * 380000 << "\n";
    return 0;
}