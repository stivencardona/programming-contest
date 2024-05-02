#include <bits/stdc++.h>
using namespace std;

int main() { 
  int t;scanf("%d", &t);
  while(t--) {
    int x; scanf("%d", &x);
    if(x % 2) {
      printf("%d is odd\n", x);
    } else {
      printf("%d is even\n", x);
    }
  }
  return 0;
}