#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  int l,r; scanf("%d %d", &l, &r);
  int tines = l + r;
  if(tines == 0) {
    printf("Not a moose\n");
  } else {
    if( l == r) {
      printf("Even %d\n", l + r);
    } else {
      printf("Odd %d\n", max(l,r) * 2);
    }
  }

  return 0;
}