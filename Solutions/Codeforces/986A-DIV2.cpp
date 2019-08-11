#include <bits/stdc++.h>
 
using namespace std;
 
const int MX = 1e5 + 10;
 
vector<vector<int>> g(MX);
vector<int> A(MX);
vector<vector<int>> dist(MX,vector<int>(101,MX));
 
struct node{
    int idx,d;
    node(int _idx, int _d):idx(_idx),d(_d){};
};
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n, m, k, s; cin >> n >> m >> k >> s;
    for(int i = 0; i < n; i++) cin >> A[i];
    for(int i = 0; i < m; i++){
        int u, v; cin >> u >> v;
        g[--v].push_back(--u);
        g[u].push_back(v);
    }
    for(int i = 1;i <= k; i++){
        queue<node>Q;
        for(int j = 0; j < n; j++){
            if(A[j] == i){
             Q.push(node(j,0));
             dist[j][i-1] = 0;
            }
        }
        while(!Q.empty()){
            node curr = Q.front();
            Q.pop();
            for(int t = 0; t < g[curr.idx].size(); t++){
                int v = g[curr.idx][t];
                if(dist[v][i-1] == MX){
                    dist[v][i-1] = curr.d + 1;
                    Q.push(node(v,curr.d+1));
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        vector<int> B;
        for(int j = 0; j < k; j++)
            B.push_back(dist[i][j]);
        sort(B.begin(),B.end());
        int ans = 0;
        for(int j = 0; j < s; j++) ans+= B[j];
        cout << ans << " ";
    }
    cout << endl;
return 0;
}