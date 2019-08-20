#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> memo;
    memo.push_back(4), memo.push_back(7);
    for(long long i = 10, index = 2, p = 1LL; i < 1e9 + 1; i*=10, p++){
        long long dx = (1LL << p);
        long long sz = index + dx;
        for(long long l = 4 * i; index < sz; index++)
            memo.push_back(l + memo[index - dx]);
        sz = index + dx;
        dx = (1LL << (p + 1LL));
        for(long long l = 7 * i; index < sz; index++)
            memo.push_back(l + memo[index - dx]);
    }
    long long l, r; cin >> l >> r;
    long long ans = 0;
    for(long long i = l; i <= r;){
        long long indx = upper_bound(memo.begin(), memo.end(), i) - memo.begin();
        indx -= (indx && memo[indx - 1] == i);
        long long val = memo[indx];
        long long dx;
        if(val > r){
            dx = r - i + 1;
        }else
            dx = val - i + 1;
        ans += val*dx;
        i+=dx;
    }
    cout << ans << "\n";
    return 0;
}