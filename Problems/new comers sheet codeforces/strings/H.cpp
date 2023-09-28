#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = false;
        for (int i = 0; i < s.length() - 2; i++)
        {
            if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
            {
                cout << "Good" << endl;
                flag = true;
                break;
            }
            else if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
            {
                cout << "Good" << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << "Bad" << endl;
    }
}