#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> array(n);
    vector<int> ans(n);
    set<int> memo;
    for (int &i : array)
        cin >> i;
    for (int i = array.size() - 1; i >= 0; i--)
    {
        memo.insert(array[i]);
        ans[i] = memo.size();
    }
    while (m--)
    {
        int q;
        cin >> q;
        cout << ans[q - 1] << "\n";
    }
    return 0;
}
