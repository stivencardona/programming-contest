#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> a(n);
    for(int &i: a) cin >> i;
    int cnt = 0;
    for(int i = 1 ; i < n-1; i++)
        cnt += (min(a[i], min(a[i+1], a[i-1])) != a[i] && max(a[i], max(a[i+1], a[i-1])) != a[i]);
    cout << cnt << "\n";
    return 0;
}