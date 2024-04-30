#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    bool stop = false;
    cin >> n;
    string stip;
    vector<int> jump;
    vector<int> memo(n, 0);
    cin >> stip;
    while (n--)
    {
        int t;
        cin >> t;
        jump.push_back(t);
    }
    string::iterator one = stip.begin();
    int i = 0;
    while (!stop)
    {
        if (memo[i] == 0)
            memo[i] = 1;
        else
        {
            stop = true;
            cout << "INFINITE"
                 << "\n";
        }
        if (stip[i] == '>')
        {
            if (i + jump[i] >= jump.size())
            {
                cout << "FINITE"
                     << "\n";
                stop = true;
            }
            else
                i = i + jump[i];
        }
        if (stip[i] == '<')
        {
            if (i - jump[i] < 0)
            {
                cout << "FINITE"
                     << "\n";
                stop = true;
            }
            else
                i = i - jump[i];
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    bool stop = false;
    cin >> n;
    string stip;
    vector<int> jump;
    vector<int> memo(n, 0);
    cin >> stip;
    while (n--)
    {
        int t;
        cin >> t;
        jump.push_back(t);
    }
    string::iterator one = stip.begin();
    int i = 0;
    while (!stop)
    {
        if (memo[i] == 0)
            memo[i] = 1;
        else
        {
            stop = true;
            cout << "INFINITE"
                 << "\n";
        }
        if (stip[i] == '>')
        {
            if (i + jump[i] >= jump.size())
            {
                cout << "FINITE"
                     << "\n";
                stop = true;
            }
            else
                i = i + jump[i];
        }
        if (stip[i] == '<')
        {
            if (i - jump[i] < 0)
            {
                cout << "FINITE"
                     << "\n";
                stop = true;
            }
            else
                i = i - jump[i];
        }
    }
    