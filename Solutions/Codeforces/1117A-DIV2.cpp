#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, l = 1, MX = 0, ML = 1;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
    {
        cin >> i;
        MX = (MX < i) ? i : MX;
    }
    for (int i = 0; i < n; i++)
    {
        int l = 0, j = i;
        for (; a[j] == MX and j < n; j++)
            l = j - i + 1;
        ML = (l > ML) ? l : ML;
        i = j;
    }
    cout << ML << "\n";
    return 0;
}
