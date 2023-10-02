#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        string s;
        cin >> s;
        if (s.length() > 10)
            cout << s.front() << s.length() - 2 << s.back() << endl;
        else
            cout << s << endl;
    }
}