#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        string s = a;
        bool ok = false;
        if (s == "abc")
        {
            cout << "YES" << endl;
            continue;
        }
        swap(s[0], s[1]);
        if (s == "abc")
        {
            cout << "YES" << endl;
            continue;
        }
        s = a;
        swap(s[0], s[2]);
        if (s == "abc")
        {
            cout << "YES" << endl;
            continue;
        }
        s = a;
        swap(s[2], s[1]);
        if (s == "abc")
        {
            cout << "YES" << endl;
            continue;
        }
        cout << "NO" << endl;
    }
}