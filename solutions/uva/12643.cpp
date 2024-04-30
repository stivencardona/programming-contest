#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n, i, j; 
    while(cin >> n >> i >> j){
        int ans = 1;
        int size = (( 1 << n) << 1);
        if(i < j ) swap(i , j);
        i += size / 2;
        j += size / 2;
        while(i != j){
            if(i % 2 == 0) i /= 2;
            else i = (i + 1) / 2;
            if(j % 2 == 0) j /= 2;
            else j = (j + 1) / 2;
            if(i != j) ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}