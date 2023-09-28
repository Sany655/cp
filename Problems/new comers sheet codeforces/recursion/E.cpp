// base conversion
#include <bits/stdc++.h>
using namespace std;

long long int baseConversion(int x)
{
    if (x == 0)
        return x;
    long long int y = baseConversion(x / 2);
    x = (y * 10) + (x % 2);
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int y;
        cin >> y;
        long long int x = baseConversion(y);
        cout << x << endl;
    }
}