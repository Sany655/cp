#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        string s;
        cin >> s;
        bool flag = false;
        while (true)
        {
            flag = false;
            for (int i = 0; i < s.length(); i++)
            {
                string x = s.substr(i, 2);
                if (x == "AB")
                {
                    s[i] = 'B';
                    s[i + 1] = 'C';
                    // cout << x << endl;
                    count++;
                    flag = true;
                }
                else if (x == "BA")
                {
                    s[i] = 'C';
                    s[i + 1] = 'B';
                    // cout << x << endl;
                    count++;
                    flag = true;
                }
            }
            if (!flag)
            {
                break;
            }
        }

        cout << count << endl;
        // cout << "ended" << endl;
    }
    return 0;
}