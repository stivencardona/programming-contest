#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> memo;
    int prev, cnt;
    cin >> prev;
    cnt = 1;
    for (int i = 1; i < n; i++)
    {
        int curr;
        cin >> curr;
        if (curr == prev)
            cnt++;
        else
        {
            memo.push_back(cnt);
            cnt = 1;
        }
        prev = curr;
    }
    memo.push_back(cnt);
    int MX = 0;
    for (int i = 0; i < (int)memo.size() - 1; i++)
    {
        int MN = 2 * min(memo[i], memo[i + 1]);
        MX = (MN > MX) ? MN : MX;
    }
    cout << MX << "\n";
    return 0;
}