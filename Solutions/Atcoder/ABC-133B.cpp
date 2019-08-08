#include <bits/stdc++.h>
 
using namespace std;
 
int doit(vector<int> a, vector<int> b){
    int ans = 0;
    for(int i = 0; i < a.size(); i++)
        ans += (a[i] - b[i]) * (a[i] - b[i]);
    return ans;
}
 
int main(){
    int n,d; cin >> n >> d;
    vector<int> memo(20000,0);
    for(int i = 1; i * i < 20000; i++ )
        memo[i*i] = 1;
    vector<vector<int>> points(n,vector<int>(d));
    for( auto &point : points)
        for( auto &x : point) 
            cin >> x;
    int cnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            cnt += memo[doit(points[i], points[j])];
    cout << cnt << "\n";
    return 0;
}