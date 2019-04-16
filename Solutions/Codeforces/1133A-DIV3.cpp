#include <bits/stdc++.h>

using namespace std;

void doit(int i)
{
    int h = i / 60;
    int m = i % 60;
    if (h > 9)
        cout << h << ":";
    else
        cout << '0' << h << ":";
    if (m > 9)
        cout << m << "\n";
    else
        cout << '0' << m << "\n";
}

int main()
{
    string b, e;
    cin >> b >> e;
    int hb = (b[0] - '0') * 10 + (b[1] - '0');
    int he = (e[0] - '0') * 10 + (e[1] - '0');
    int mb = (b[3] - '0') * 10 + (b[4] - '0');
    int me = (e[3] - '0') * 10 + (e[4] - '0');
    int tim = ((hb * 60 + mb) + (he * 60 + me)) / 2;
    doit(tim);
    return 0;
}