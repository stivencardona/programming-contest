#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<pair<string, int>> memo(n);
        auto cmp = [](pair<int, int> l, pair<int, int> r) { 
            if(l.first != r.first) {
                return l.first > r.first;
            } else {
                return l.second > r.second;
            }
        };
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
        for(int i = 0; i < n; i++) {
            string key;
            int freq;
            cin >> key >> freq;
            memo[i] = pair<string, int>(key, freq);
            pq.push(pair<int, int>(freq, i));
        }

        while(m--){
            pair<int, int> curr = pq.top();
            pq.pop();
            cout << curr.first << " " << memo[curr.second].first << "\n";
            pq.push(pair<int, int>(curr.first + memo[curr.second].second, curr.second));
        }
    }
    return 0;
}