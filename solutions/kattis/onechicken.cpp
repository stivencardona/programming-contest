#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  int n,m; scanf("%d %d", &n, &m);
  int dif = abs(n - m);
  if(max(n,m) == m) {
    if( dif > 1) {
      printf("Dr. Chaz will have %d pieces of chicken left over!\n", dif);
    } else {
      printf("Dr. Chaz will have %d piece of chicken left over!\n", dif);
    }
  } else {
    if( dif > 1) {
      printf("Dr. Chaz needs %d more pieces of chicken!\n", dif);
    } else {
      printf("Dr. Chaz needs %d more piece of chicken!\n", dif);
    }
  }

  return 0;
}