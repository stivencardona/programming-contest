#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int n, b;
  while(scanf("%d %d", &b, &n) && ( n || b)) {

    vector<int> reserves(b + 1, 0);
    vector<int> debts(b + 1, 0);
    for( int i = 0; i < b; i++) scanf("%d", &reserves[i]);
    while(n--){
      int i, j, v; scanf("%d %d %d", &i, &j, &v);
      debts[i - 1] += v;
      reserves[j - 1] += v;
    }

    bool stb = true;
    for(int i = 0; i < b;i++) {
      stb = stb && (reserves[i] >= debts[i]);
    }
    if(stb) printf("S\n");
    else printf("N\n");
  } 
  return 0;
}