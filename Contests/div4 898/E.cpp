#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x;
        cin >> n >> x;
        vector<long long int> coral;
        for (int i = 0; i < n; i++)
        {
            long long el;
            cin >> el;
            coral.push_back(el);
        }
        sort(coral.begin(),coral.end());
        long long int h = coral[0];
        

        cout << h << endl;
    }
}