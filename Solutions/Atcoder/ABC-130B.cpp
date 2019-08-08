#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N,X; cin >> N >> X;
    vector<int> a(N);
    for(int &i : a) cin >> i;
    for(int i = 1; i < a.size(); i++) a[i] += a[i - 1];
    int cont = 0;
    for(int i : a) cont += (i <= X);
    cout << cont + 1 << "\n";
    return 0;
}