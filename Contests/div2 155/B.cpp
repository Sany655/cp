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
        vector<pair<int,int>> ab(n);
        // vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ab[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ab[i].second;
        }
    }
}