#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int MX, sum;
    MX = sum = 0;
    while(n--){
        int aux ; cin >> aux;
        sum += aux;
        MX = max(MX, aux);
    }    
    cout <<((sum - MX > MX) ? "Yes" : "No" ) << "\n"; 
}