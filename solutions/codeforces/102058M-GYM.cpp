#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,k,a; cin >> n >> k >> a;
    int min  = 1000000010;
    while(n--){
        int s,t; cin >> t >> s;
        int value = (k/a) + (s * (k / (t * a) - (k % (t * a) == 0))); 
        min = (min > value)? value : min;
    }
    cout << min << "\n";
}
