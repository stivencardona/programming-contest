#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int n, m; cin >> n >> m;
  char MAT[n][m];
  for(int i = 0; i < n ; i++){
    char init = (i==0 ) ? 'B' : (MAT[i - 1][0] =='B') ? 'W' : 'B';
    for(int j = 0; j < m ; j++){
      MAT[i][j] = init;
      init = (init =='B') ? 'W' : 'B';
    }
  }
  std::vector<string> memo(n);
  for(int i = 0; i < n ; i++){
    string tmp; cin >> tmp;
    memo[i] = tmp;
  }
  for(int i = 0 ; i < n ;i++){
    for(int j = 0; j < m ; j++){
      cout << ((memo[i][j] == '.') ? MAT[i][j] : '-') ;
    }
    cout << "\n";
  }
  return 0;
}
