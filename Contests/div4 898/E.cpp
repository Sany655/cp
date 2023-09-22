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
            long long x;
            cin >> x;
            coral.push_back(x);
        }
        sort(coral.begin(), coral.end());

        int a = 0;
        for (int i = 0,j=0; i < coral.size(); i++)
        {
            // coral[i+1]-coral[1]
        }
        
    }
}