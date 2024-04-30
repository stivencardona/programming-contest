#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    string a,b; cin >> a >> b;
    vector<int> c;
    if(a.size() == b.size()){
        for(int i = 0; i < a.size(); i++) {
            if(a[i] != b[i]) 
                c.push_back(i);
        }
        if(c.size() == 2 && (a[c[0]] == b[c[1]] && a[c[1]] == b[c[0]])){
            cout << "YES\n";
            return 0;
        }
    }
    cout <<"NO\n";
    return 0;
}