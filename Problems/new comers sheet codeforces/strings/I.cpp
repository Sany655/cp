#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    string s;
    cin >> s;
    string r1 = s.substr(0, s.size() / 2);
    int bg;
    if (s.size() % 2 == 0)
        bg = s.size() / 2;
    else
        bg = (s.size() / 2) + 1;
    string r2 = s.substr(bg, s.size());
    reverse(r2.begin(), r2.end());
    if (r1 == r2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    // }
}