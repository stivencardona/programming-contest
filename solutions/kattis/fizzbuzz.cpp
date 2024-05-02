#include <bits/stdc++.h>

using namespace std;

int main() { 
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  int x, y, n;
  scanf("%d %d %d", &x, &y, &n);
  int c = 0;
  while(++c <= n){
    if((c % x) && (c % y) ) {
      printf("%d\n", c);
    } else {
      if(c % x == 0) {
        printf("Fizz");
      }
      if(c % y == 0) {
        printf("Buzz");
      }
      printf("\n");
    }
  }
  return 0;
}