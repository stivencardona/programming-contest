#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, l, r; cin >> n >> l >> r;
    long long MX = (1 << r) + (1 << (r - 1))*(n - r) - 1;
    long long MN = (1 << l) + (n - l) - 1;
    cout << MN << " " << MX << "\n";    
    return 0;
}