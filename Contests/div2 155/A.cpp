#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s1, e1;
        cin >> s1 >> e1;
        bool loose = false;
        vector<pair<int, int>> pl(n);
        // cout << s1 << " " << e1 << endl;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> pl[i].first >> pl[i].second;
        }

        for (int i = 0; i < n - 1; i++)
        {
            // int s, e;
            // cout << pl[i].first << " " << pl[i].second << endl;
            if (s1 <= pl[i].first)
            {
                if (e1 <= pl[i].second)
                {
                    loose = true;
                    break;
                }
            }
            // cout << s << " " << e << endl;
        }
        // cout << "loose = " << loose << endl;
        int w = 0;
        if (!loose)
        {
            w = s1 - 1;
        }

        if (w != 0)
        {
            cout << w << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}