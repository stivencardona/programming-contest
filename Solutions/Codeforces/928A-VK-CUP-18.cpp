#include <bits/stdc++.h>
 
using namespace std;
 
bool match(char c, char x)
{
    if (c == x)
        return true;
    if (abs(c - x) == 32)
        return true;
    if ((c == '0' and x == 'O') or (c == 'O' and x == '0'))
        return true;
    if ((c == '0' and x == 'o') or (c == 'o' and x == '0'))
        return true;
    if ((c == '1' and x == 'I') or (c == 'I' and x == '1'))
        return true;
    if ((c == '1' and x == 'i') or (c == 'i' and x == '1'))
        return true;
    if ((c == '1' and x == 'l') or (c == 'l' and x == '1'))
        return true;
    if ((c == '1' and x == 'L') or (c == 'L' and x == '1'))
        return true;
    if ((c == 'i' and x == 'L') or (c == 'L' and x == 'i'))
        return true;
    if ((c == 'I' and x == 'L') or (c == 'L' and x == 'I'))
        return true;
    if ((c == 'i' and x == 'l') or (c == 'l' and x == 'i'))
        return true;
    if ((c == 'I' and x == 'l') or (c == 'l' and x == 'I'))
        return true;
    return false;
}
 
int main()
{
    string init;
    cin >> init;
    list<string> st;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        st.push_back(s);
    }
    for (int i = 0; i < init.size(); i++)
    {
        list<string>::iterator it = st.begin();
        while (it != st.end())
        {
            string tmp = *it;
            list<string>::iterator aux = it++;
            if (init.size() != tmp.size())
            {
                st.erase(aux);
            }
            else if (!match(tmp[i], init[i]))
            {
                st.erase(aux);
            }
        }
    }
    cout << ((st.size() > 0) ? "No\n" : "Yes\n");
    return 0;
}