#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  string s;
  int d;
  cin >> s >> d;
  if((s == "OCT" && d == 31) || (s == "DEC" && d == 25)) {
    printf("yup\n");
  } else {
    printf("nope\n");
  }
  return 0;
}