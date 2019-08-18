#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    vector<int> dat(26, 0);
    int n, k, idx, _k;
    cin >> n >> k;
    string s;
    cin >> s;
    for (char c : s)
        dat[c - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        if (dat[i] < k)
            k -= dat[i];
        else
        {
            idx = i;
            break;
        }
    }
    for (char c : s)
    {
        if (c - 'a' > idx)
            cout << c;
        if (c - 'a' == idx)
        {
            k--;
            if (k < 0)
                cout << c;
        }
    }
    cout << "\n";
    return 0;
}
