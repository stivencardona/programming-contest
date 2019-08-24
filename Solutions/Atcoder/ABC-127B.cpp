#include <bits/stdc++.h>

using namespace std;

int main(){
    long long r, D, x; cin >> r >> D >> x;
    x = r*x-D;
    for(int i = 0; i < 10; i++, x = r*x - D) cout << x << "\n";
    return 0;
}