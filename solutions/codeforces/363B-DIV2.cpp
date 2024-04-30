#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,k; cin >> n >> k;
    vector<int> A(n);
    vector<int> memo(n + 1);
    memo[0] = 0;
    vector<pair<int,int>> B;
    for(int &i: A) cin >> i;
    for(int i = 1; i < n + 1 ; i++)
        memo[i] += memo[i-1] + A[i-1];
    for(int i = 0; i <= n - k; i++){
        int ans;
        ans = memo[i + k] - memo[i];
        B.push_back(pair<int,int>(ans, i));
    }
    sort(B.begin(), B.end());
    cout << B[0].second + 1<< "\n";    
    return 0;
}