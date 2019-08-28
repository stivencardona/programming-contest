#include <bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
 
int main(){
    int n; cin >> n;
    int fives = 0, zeroes = 0;
    while(n--){
        int tmp; 
        cin >> tmp; 
        if(tmp == 5) 
            fives++;
        else 
            zeroes++; 
    }
    if(zeroes){
        for(int i = 0; i < fives/9; i++) cout << 555555555;
        if(fives/9)
            for(int i = 0; i < zeroes; i++) cout << 0;
        else 
            cout << 0;
    } else cout << -1;
    cout << "\n";
    return 0;
}
