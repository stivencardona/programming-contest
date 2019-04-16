#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = (c % 2 || a <= c && c <= b);
    cout << (ans ? "Take another envelope" : "Stay with this envelope") << endl;
    return 0;
}