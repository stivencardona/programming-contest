#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, cont = 0;
    cin >> num;
    for (int i = 0; i < 32; i++)
    {
        cont += (1 & (num >> i));
    }
    cout << cont << "\n";
    return 0;
}