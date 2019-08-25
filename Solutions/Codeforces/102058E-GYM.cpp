#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long A, B; cin >> A >> B;
	long long C, D; cin >> C >> D;
	long long ans = 0;
	for (int x = 1; x < 1000; x++) {
		for (int y = 1; x + y < 1000; y++) {
			if (__gcd(x, y) == 1) {
				long long c1 = min(B / x, D / y);
				long long c2 = max((A + x - 1) / x, (C + y - 1) / y);
				ans += max(0LL, c1 - c2 + 1);
			}
		}
	}
	cout << ans << endl;
	return 0;
}
