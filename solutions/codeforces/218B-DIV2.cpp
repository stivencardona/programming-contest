#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m;
    cin >> n >> m;
    priority_queue<int> A;
    priority_queue<int, vector<int>, greater<int>> B;
    int MX = 0, MN = 0;
    for (int i = 0; i < m; i++)
    {
        int tmp;
        cin >> tmp;
        A.push(tmp);
        B.push(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        int aux = A.top();
        A.pop();
        MX += aux;
        if (aux > 1)
            A.push(aux - 1);
        aux = B.top();
        B.pop();
        MN += aux;
        if (aux > 1)
            B.push(aux - 1);
    }
    cout << MX << " " << MN << "\n";
    return 0;
}
