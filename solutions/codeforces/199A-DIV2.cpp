#include <bits/stdc++.h>

using namespace std;

#define pb push_back
 
int main(){
    int n ; cin >> n;
    vector<int> fib;
    vector<pair<int,int>> memo;
    map<int, int> data;
    fib.pb(0);
    fib.pb(1);
    for(int i = 2; fib[i - 1] < 1000000010; i++) fib.pb(fib[i - 1] + fib[i - 2]);
    int cont = 0;
    for(int i : fib)
        for(int j : fib){
            data[i + j] = cont++;
            memo.pb(pair<int,int>(i,j));
        } 
    bool state = false;
    for(int i : fib){
        if(data.find(n - i) != data.end()){
            cout << i << " " << memo[data[n - i]].first << " " << memo[data[n - i]].second << "\n";
            state = true;
            break;
        }
    }
    if(!state) cout << "I'm too stupid to solve this problem\n"; 
    return 0;
}
