#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    int sum, ans;
    sum = ans = 0;
    for (int &i : a)
    {
        cin >> i;
        sum += i;
    }
    for (int i : a)
        ans += !((sum - i) % 2);
    cout << ans << "\n";
    return 0;
}