#include <bits/stdc++.h>
using namespace std;

int main() { 
  int x, y;
  while(scanf("%d %d", &x, &y) && ( x || y)) {
    if(x + y == 13) {
      printf("Never speak again.\n");
    } else if( x == y) {
      printf("Undecided.\n");
    } else if( x > y) {
      printf("To the convention.\n");
    } else {
      printf("Left beehind.\n");
    }
  }
  return 0;
}