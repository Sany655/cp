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
    map<char, int> ans;
    for (int i = 0; i < s.size(); i++)
    {
        ans[s[i]]++;
    }

    for (auto &&i : ans)
    {
        cout << i.first << " : " << i.second << endl;
    }

    // }
}