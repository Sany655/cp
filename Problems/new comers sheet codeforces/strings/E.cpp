#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int sum = 0;
    while (s != "")
    {
        sum += s.back()-'0';
        s.pop_back();
    }
    cout << sum << endl;
}