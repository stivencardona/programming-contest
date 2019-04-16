#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

double angle(int a, int b, int c)
{
    return acos((b * b + c * c - a * a) * 1.0 / (2.0 * b * c));
}

double f(int r, double alpha)
{
    return (r * r * (PI - alpha) * 0.5) - (r * r) * 1.0 / tan(alpha * 0.5);
}

int main()
{
    int a, b, c, r;
    cin >> a >> b >> c >> r;
    double A = angle(a, b, c);
    double B = angle(b, a, c);
    double C = angle(c, a, b);
    double s = (a + b + c) * 0.5;
    double ans = sqrt(s * (s - a) * (s - b) * (s - c));
    double total = ans;
    ans += f(r, A) + f(r, B) + f(r, C);
    cout << fixed << setprecision(11) << ans / total << endl;
    return 0;
}