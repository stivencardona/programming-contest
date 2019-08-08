#include <bits/stdc++.h>

using namespace std;

vector<string> cities(110);
vector<int> probabilities(110);

bool cmp(int a,int b){
    if(cities[a] < cities[b]) 
        return true;
    if(cities[a] > cities[b]) 
        return false;
    if(probabilities[a] > probabilities[b]) 
        return true;
    return false;
}

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        int p; cin >> p;
        cities[i] = s;
        probabilities[i] = p; 
        a[i] = i;
    } 
    sort(a.begin(), a.end(), cmp);
    for(int i : a) cout << i + 1 << "\n";
    return 0;
}