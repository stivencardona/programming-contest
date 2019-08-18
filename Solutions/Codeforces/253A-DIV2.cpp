#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n, m;
	cin >> n >> m;
	char ci = (n > m) ? 'B' : 'G';
	char cf = (n > m) ? 'G' : 'B';
	for (int i = 1; i <= max(n, m) - min(n, m); i++)
		cout << ci;
	for (int i = 1; i <= min(n, m); i++)
		cout << cf << ci;
	cout << "\n";
	return 0;
}
