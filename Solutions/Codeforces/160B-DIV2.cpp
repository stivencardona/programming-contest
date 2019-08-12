#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, minor = 0, mayor = 0;
    cin >> n;
    string s, s1 = "", s2 = "";
    cin >> s;
    for (int i = 0; i < n; i++)
        s1 += s[i], s2 += s[(n << 1) - i - 1];
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    for (int i = 0; i < n; i++)
    {
        minor += (s1[i] < s2[i]);
        mayor += (s1[i] > s2[i]);
    }
    cout << ((minor == n) ? "YES\n" : (mayor == n) ? "YES\n" : "NO\n");
    return 0;
}