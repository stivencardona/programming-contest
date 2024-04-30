#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int f(string s){
    int numNeg, numPos;
    numNeg = numPos = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+') numPos++;
        if(s[i] == '-') numNeg++;
    }
    return numPos - numNeg;
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2; cin >> s1 >> s2;
    int numNeg, numPos;
    int ok = f(s1);
    int upper = 0;
    for(int i = 0; i < s2.size(); i++)
        upper += (s2[i] == '?');
    int mx = (1 << upper) - 1;
    int cnt = 0;
    for(int i = 0; i <= mx ; i++){
        string aux = s2;
        for(int j = 0, idx = 0; j < aux.size(); j++){
            if(aux[j] == '?'){
                if((1 << idx++) & i) aux[j] = '+';
                else aux[j] = '-';
            }
        }
        cnt += (ok == f(aux));
    } 
    double a = cnt, b = mx + 1;
    if(mx == 0) {
        if(ok == f(s2)) cout << setprecision(10) << fixed << 1.0000000000 <<"\n";
        else cout << setprecision(10) << fixed << 0.0000000000 << "\n";
    } else {
        double ans = a / b;
        cout << setprecision(10) << fixed << ans << "\n";
    }
    return 0;
}
