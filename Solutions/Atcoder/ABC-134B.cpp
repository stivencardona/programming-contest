#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int N,D; cin >> N >> D;
    int dif = (21 + D) - (21 - D) + 1;
    cout << (N + dif - 1) / dif <<  "\n";
    return 0;
}