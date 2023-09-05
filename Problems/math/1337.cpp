#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long e = (a + b) / 2, f = (b + c) / 2, g = (c + d) / 2;
        cout << e << " " << f << " " << g << endl;
    }
}