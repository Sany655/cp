#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int a = (k * l) / (nl * n);
    int b = (c * d) / n;
    int v = p / (np * n);

    if (a <= b && a <= v)
    {
        cout << a << endl;
    }
    else if (b <= a && b <= v)
    {
        cout << b << endl;
    }
    else if (v <= a && v <= b)
    {
        cout << v << endl;
    }

    // cout << a << endl;
    // cout << b << endl;
    // cout << v << endl;

    return 0;
}
