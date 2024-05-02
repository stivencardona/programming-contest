#include <bits/stdc++.h>

using namespace std;

int main() { 
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int t; scanf("%d", &t);
  while(t--) {
    int n; scanf("%d", &n);
    vector<int> gnomes(n);
    for(int &i: gnomes) {
      scanf("%d", &i);
    }
    for(int i = 1; i < n - 1; i++) {
      if( gnomes[i] != gnomes[i-1] + 1) {
        printf("%d\n", i+1);
        break;
      }
    }
  }
  return 0;
}