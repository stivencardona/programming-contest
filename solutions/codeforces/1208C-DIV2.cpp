#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n ; cin >> n;
    int grid[n][n];
    int cnt = 0;
    for(int i = 0; i < n; i += 4)
        for(int j = 0; j < n; j += 4)
            for(int _i = i; _i < i + 4 ; _i++)
                for(int _j = j ; _j < j + 4; _j++)
                    grid[_i][_j] = cnt++;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++) 
            cout << grid[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
