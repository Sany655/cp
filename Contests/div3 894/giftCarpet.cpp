#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<bool> ok;
        ok.assign(c,false);
        bool canread = true;
        ;
        while (r--)
        {
            string s;
            cin >> s;
            for (int i = c - 1; i >= 0; i--)
            {
                switch (s[i])
                {
                case 'v':
                case 'i':
                case 'k':
                case 'a':
                    c = i - 1;
                    ok[c] = true;
                    break;
                default:
                    break;
                }
            }
            for (int i = 0; i < c; i++)
            {
                if (!ok[i])
                    canread = false;
                cout << ok[i] << " ";
            }
            cout << endl;
        }
        if (canread)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}