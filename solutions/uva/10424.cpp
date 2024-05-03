#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int digit(int a) {
  if( a < 10) {
    return a;
  }
  int ans = 0;
  while( a ) {
    ans += a % 10;
    a /= 10;
  }
  return digit(ans);
}

int love(string s) {
  int ans = 0;
  for(char &c: s){
    if( c >= 'a' && c <= 'z') {
      ans += c - 'a' + 1;
    }
    if( c >= 'A' && c <= 'Z') {
      ans += c - 'A' + 1;
    }
  }
  return digit(ans);
}


int main(){
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  string one, two;
  while(getline(cin, one)){
    getline(cin, two);
    double dig1 = (double)love(one);
    double dig2 = (double)love(two);
    if( dig1 == dig2) {
      cout << "100.00 %\n";
    } else {
      double ans = (min(dig1, dig2 ) / max(dig1, dig2)) * 100;
      cout << setprecision(2) << fixed << ans << " %\n";
    }
  }
}