#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n;
        int c = 0;
        cin >> a >> b >> n;
        while (a <= n && b <= n)
        {
            if (a <= b)
                a += b;
            else
                b += a;
            c++;
            // cout << c << " - "<<a<<" - "<<b<<endl;
        }
        cout << c << endl;
    }

    return 0;
}
