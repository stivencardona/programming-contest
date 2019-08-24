#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,k; cin >> a >> b >> k;
    int gcd = __gcd(a,b);
    for(int i = gcd, j = 1;i > 0; i--){
        if(gcd % i == 0){
            if(j == k){
                cout << i << "\n";
                break;
            } 
            j++;
        } 
    }
    return 0;
}