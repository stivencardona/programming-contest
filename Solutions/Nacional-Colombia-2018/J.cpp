#include <bits/stdc++.h>

using namespace std;

long long ceil(long long a, long long b){
    return (a + b - 1) / b;
}

int main(){
    long long l,n,d; 
    while(cin >> l >> n >> d && l + n + d){
        pair<long long, long long> ans(1e17, 1);
        long long a,b;
        for(b = 1; b <= n ; b++){
            a = ceil(b * d , l);
            if(ans.first * b > ans.second * a * l) ans = pair<long long, long long>(a * l, b );
        }
        long long gcd = __gcd(ans.first,ans.second);
        cout << ans.first / gcd << "/" << ans.second / gcd <<"\n";
    }
    return 0;
}