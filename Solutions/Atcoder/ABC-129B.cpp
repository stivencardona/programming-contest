#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector<int> a(n);
    for(int &i : a) cin >> i;
    vector<int> b(a);
    for(int i = 1; i < a.size(); ++i)
        a[i] += a[i-1];
    b.push_back(0);
    for(int i = n-1; i >= 0; --i)
        b[i] += b[i+1];
    int minor = 1e9;
    for(int i = 0; i < a.size(); i++) minor = (minor > abs(a[i] - b[i+1])) ? abs(a[i] - b[i+1]): minor; 
    cout << minor << "\n";
    return 0;
}