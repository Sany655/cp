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
        set<set<int>> arr;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            set<int> ns;
            for (int j = 0; j < k; j++)
            {
                int x;
                cin >> x;
                ns.insert(x);
            }
            arr.insert(ns);
        }

        set<int> s;
        for (auto a : arr)
        {
            for (auto b : a)
            {
                // cout << b << " ";
                s.insert(b);
            }
            // cout << endl;
        }
        for (auto b : s)
        {
            cout << b << " ";
        }
    }
    return 0;
}