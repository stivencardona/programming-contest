#include <bits/stdc++.h>

using namespace std;


int getIndex(int start,string s){
    int indx = start;
    while( indx < s.size() && s[indx] != ';') indx++;
    return indx;
}

string toLower(string s){
    string st = "abcdefghijklmnopqrstuvwxyz";
    for(char &c : s){
        c = tolower(c);
    }
    return s;
}

vector<string> players(200);
vector<int> scores(200);

bool cmp(int i, int j){
    if(scores[i] != scores[j]) return scores[i] > scores[j];
    return toLower(players[i]) < toLower(players[j]);
}

int main(){
    string t;
    int cnt = 0;
    while(getline(cin,t)){
        int n = atoi(t.c_str());
        string s;
        for(int index = 0; index < n; index++){
            getline(cin, s);
            int r = getIndex(0,s);
            string name = s.substr(0,r);
            int score = 0;
            for(int i = 0;i < 5; i++){
                int l = r + 1;
                r = getIndex(l,s);
                string p = s.substr(l,r - l);
                for(int j = 0; j < p.size() - 1; j++) 
                    score += (p[j] == '1');
                score += 2 * (p[p.size() - 1] == '1');
            }
            players[index] = name;
            scores[index] = score;
        }
        vector<int> ans(n);
        for(int i = 0; i < n; i++) ans[i] = i;
        sort(ans.begin(), ans.end(), cmp);
        cout << "Case " << ++cnt << ":\n";
        for(int i = 0; i < n; i++) cout << players[ans[i]] << " " << scores[ans[i]] << "\n"; 
    }
    return 0;
}