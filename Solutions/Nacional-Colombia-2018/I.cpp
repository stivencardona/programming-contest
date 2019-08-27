#include <bits/stdc++.h>

using namespace std;

typedef vector<int> vi;

const int MX = 50000;

int dfsNumberCounter, numSCC;

void tarjanSCC(int u,vector<vi> &graph, vi &dfs_num, vi &dfs_low, vi &S, vi &visited){
    dfs_low[u] = dfs_num[u] = dfsNumberCounter++;
    S.push_back(u);
    visited[u] = 1;
    for(int j = 0; j < graph[u].size(); j++){
        int v = graph[u][j];
        if(dfs_num[v] == -1)
            tarjanSCC(v,graph,dfs_num,dfs_low,S,visited);
        if(visited[v])
            dfs_low[u] = min(dfs_low[u], dfs_low[v]);
    }

    if(dfs_low[u] == dfs_num[u]){
        numSCC++;
        while(true){
            int v = S.back(); S.pop_back(); visited[v] = 0;
            if(u == v) break;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    while(cin >> n >> m){
        vector<vi> graph(n + 1);
        while(m--){
            int sz; cin >> sz;
            int u,v;
            if(sz <= 1){
                cin >> u >> v;
                graph[u].push_back(v);
            }else{
                vector<int> nodes(sz);
                for(int &i : nodes)
                    cin >> i;
                for(int i = 0; i < sz; i++){
                        graph[nodes[i]].push_back(nodes[(i + 1) % sz]);
                        graph[nodes[(i + 1) % sz]].push_back(nodes[i]);
                }
            }    
        }

        vi dfs_num(n + 1,-1), dfs_low(n + 1,0), visited(n + 1,0),S;
        dfsNumberCounter = numSCC = 0;
        for(int i = 1; i <= n; i++)
            if(dfs_num[i] == -1)
                tarjanSCC(i,graph,dfs_num,dfs_low,S,visited);
        cout << ((numSCC > 1) ? "NO" : "YES") << "\n";
    }
    return 0;
}