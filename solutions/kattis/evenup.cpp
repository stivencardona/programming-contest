#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;scanf("%d", &n);
  stack<int> si;
  stack<int> r;
  while(n--) {
    int c; scanf("%d", &c);
    si.push(c);
  }

  while(!si.empty()) {
    int curr = si.top(); 
    si.pop();
    if(si.empty() || ((si.top() + curr) % 2)) {
      r.push(curr); 
    } else {
      si.pop();
      while(!r.empty()) { 
        si.push(r.top());
        r.pop();
      }
    }
  }
  cout << r.size() << "\n";
  return 0;
}