#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,l; cin >> n >> l;
    vector<int> a(n);
    int acc = 0;
    for(int i = 1; i <= n; i++){
        a[i-1] = l + i - 1;
        acc += a[i-1];
    }
    int ans = 1e9;
    int val = 0;
    for(int i: a)
        if(ans > abs(acc - (acc - i))){
            ans = abs(acc - (acc - i));
            val = i;
        }
    cout << acc - val <<"\n";
    return 0;
}