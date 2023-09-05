#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, newS;
        cin >> s;
        newS = s;
        bool possible = false;
        if (s.size() > 3)
        {
            for (int i = 0; i < s.size() / 2; i++)
            {
                if (i != 0 && s[i] != s[i - 1])
                {
                    possible = true;
                    break;
                }
            }
        }

        if (possible)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}