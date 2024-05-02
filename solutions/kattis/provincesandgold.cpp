#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  int g,s, c; scanf("%d %d %d", &g, &s, &c);
  int p = g * 3 + s * 2 + c;
  if(p <= 1) {
    printf("Copper\n");
  }
  if(p == 2) {
    printf("Estate or Copper\n");
  }
  if(p >= 3 && p <= 4) {
    printf("Estate or Silver\n");
  }
  if(p == 5) {
    printf("Duchy or Silver\n");
  }
  if(p >= 6 && p <= 7) {
    printf("Duchy or Gold\n");
  }
  if(p >= 8) {
    printf("Province or Gold\n");
  }
  return 0;
}