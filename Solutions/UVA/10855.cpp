#include <bits/stdc++.h>

using namespace std;

typedef vector<vector<char>> vvc;

int N,n;

void rotate(vvc a, vvc &b){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            b[j][n - i - 1] = a[i][j];
}

int check(vvc &A,vvc &a){
    int ans = 0;
    for(int i = 0; i <= A.size() - a.size(); i++)
        for(int j = 0; j <= A.size() - a.size(); j++){
            bool state = true;
            for(int _i = 0;_i < a.size(); _i++)
                for(int _j = 0; _j < a.size(); _j++)
                    state &= A[i + _i][j + _j] == a[_i][_j];
            ans += state;
        }
    return ans;
}

int main(){
    while(cin >> N >> n && N + n){
        vvc A(N,vector<char>(N)), a(n,vector<char>(n));
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                cin >> A[i][j];
        for(int i = 0; i < n; i++)
            for(int j = 0;j < n; j++)
                cin >> a[i][j];
        
        cout << check(A,a) << " ";
        rotate(a,a);
        cout << check(A,a) << " ";
        rotate(a,a);
        cout << check(A,a) << " ";
        rotate(a,a);
        cout << check(A,a) << "\n";
    }
    return 0;
}