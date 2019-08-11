#include <bits/stdc++.h>
 
using namespace std;
 
const int MN = 5010;
 
int tp[MN], memo[4] = {0, 0, 0, 0};
 
int main()
{
    int n;
    cin >> n;
    string C, A;
    cin >> C >> A;
    for (int i = 0; i < n; i++)
    {
        char _c = C[i], _a = A[i];
        if (_c == '0' && _a == '0')
        {
            memo[0]++;
            tp[i] = 0;
            continue;
        }
        if (_c == '0' && _a == '1')
        {
            memo[1]++;
            tp[i] = 1;
            continue;
        }
        if (_c == '1' && _a == '0')
        {
            memo[2]++;
            tp[i] = 2;
            continue;
        }
        if (_c == '1' && _a == '1')
        {
            memo[3]++;
            tp[i] = 3;
            continue;
        }
    }
    int na, nb, nc, nd;
    na = memo[0], nb = memo[1], nc = memo[2], nd = memo[3];
    int a, b, c, d;
    bool state = false;
    for (a = 0; a <= na && !state; a++)
    {
        for (b = 0; b <= nb && !state; b++)
        {
            d = a + nb + nd - (n >> 1);
            c = n - (a << 1) - b - nb - nd;
            if ((c >= 0 && c <= nc) && (d >= 0 && d <= nd))
                state = true;
        }
    }
    memo[0] = --a, memo[1] = --b, memo[2] = c, memo[3] = d;
    if (state)
    {
        for (int i = 0; i < n; i++)
        {
            if (memo[tp[i]] > 0)
            {
                cout << i + 1 << " ";
                memo[tp[i]]--;
            }
        }
        cout << "\n";
    }
    else
    {
        cout << -1 << "\n";
    }
 
    return 0;
}