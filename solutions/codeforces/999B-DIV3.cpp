#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    string s, ans = "";
    cin >> s;
    for (int i = 2; i <= n; i++)
    {
        if (!(n % i))
        {
            for (int j = i - 1; j >= 0; j--)
                ans += s[j];
            for (int j = i; j < n; j++)
                ans += s[j];
            s = ans;
            ans = "";
        }
    }
    cout << s << "\n";
    return 0;
}
