#include <bits/stdc++.h>

using namespace std;

template <class T>
string toStr(const T &x)
{
    stringstream s;
    s << x;
    return s.str();
}
template <class T>
int toInt(const T &x)
{
    stringstream s;
    s << x;
    int r;
    s >> r;
    return r;
}

#define For(i, a, b) for (int i = (a); i < (b); i++)
#define foreach(x, v) for (typeof(v).begin() x = (v).begin(); x != (v).end(); x++)
#define D(x) cout << (x) << "\n";

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, x;
    cin >> n >> k >> x;
    int ans = 0;
    k = n - k;
    while (n--)
    {
        int t;
        cin >> t;
        if (k > 0)
        {
            ans += t;
        }
        else
        {
            ans += x;
        }
        k--;
    }
    D(ans);
    return 0;
}