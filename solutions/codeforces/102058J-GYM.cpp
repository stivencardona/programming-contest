#include <bits/stdc++.h>
using namespace std;
 
const int MX = 1000010, oo = 1e9 + 7;
int a[MX], b[MX];
 
long long f(long long i, long long sun, long long x) { return ((a[x] - sun) * i + x * sun) / x + 1; }
 
int can(long long sun, long long x) {
	for (int i = 0; i < x; i++)
		if (a[i] >= f(i, sun, x))
			return 0;
	return 1;
}
 
int main() {
	int n; cin >> n;
	for (int i = 0; i < 2 * n; i++) {
		int p; cin >> p;
		b[p] = (i % 2 ? -1 : 1);
	}
	for (int i = 1, curr = 0; i < MX; i++) {
		a[i] = a[i - 1] + curr;
		if (b[i] != 0) curr = b[i];
	}
	int x; cin >> x;
	int lo = 0, hi = oo;
	if (can(0, x)) { cout << 0 << endl; return 0; }
	while (hi - lo > 1) {
		int mi = (hi + lo) / 2;
		if (can(mi, x)) hi = mi;
		else lo = mi;
	}
	cout << hi << endl;
	return 0;
}
