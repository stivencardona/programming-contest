#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    cout << n << " ";
    for (int i = 1; i < n - 1; i++)
        cout << i << " ";
    if (n > 1)
        cout << n - 1;
    cout << "\n";
    return 0;
}
