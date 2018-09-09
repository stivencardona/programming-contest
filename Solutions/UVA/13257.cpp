#include <bits/stdc++.h>

#define pb push_back

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n; cin >> n;
    while(n--){
        int ans = 0;
        string query; cin >> query;
        vector<vector<int> > dat(26);
        for(int i = 0 ; i < query.size(); i++)
            dat[query[i] - 'A'].pb(i);
        // for(auto x : dat){
        //     if(x.size()){
        //         for(auto y : x){
        //             cout << y << " ";
        //         }
        //         cout << "\n";
        //     }
        // }
        // cout << "debbug " << ans << "\n";
        for(int i = 0; i < 26; i++){
            int _i = (dat[i].size()) ? dat[i].front() : -1;
            for(int j = 0; j < 26; j++){
                int _j = (upper_bound(dat[j].begin(),dat[j].end(),_i) - dat[j].begin() < dat[j].size()) ? dat[j][upper_bound(dat[j].begin(),dat[j].end(),_i) - dat[j].begin()] : -1; 
                for(int k = 0; k < 26; k++){
                    int _k = (upper_bound(dat[k].begin(),dat[k].end(),_j) - dat[k].begin() < dat[k].size()) ? dat[k][upper_bound(dat[k].begin(),dat[k].end(),_j) - dat[k].begin()] : -1;
                    if ((_i < _j and _j < _k) and ((_i >= 0 and j >= 0) and (k >= 0))){
                        ans ++;
                    }       
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}