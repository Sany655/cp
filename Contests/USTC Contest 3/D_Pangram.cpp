#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    int y;
    cin >> y >> x;
    sort(x.begin(), x.end());
    bool flag = true;
    map<char, bool> chars;
    for (auto &&i : x)
    {
        char its = int(i) > 95 ? char(int(i) - 32) : i;
        chars[its] = true;
    }

    for (int i = 65; i < 65 + 26; i++)
    {
        if (!chars[char(i)])
        {
            flag = false;
        }
    }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}