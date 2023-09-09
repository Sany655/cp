#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int n, x, count = 0;
    vector<long int> p;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        long int pi;
        cin >> pi;
        p.push_back(pi);
    }
    sort(p.begin(), p.end());

    int i = 0, j = n - 1;
    while (i < j)
    {
        if (p[i] + p[j] <= x)
        {
            i++;
            j--;
            count++;
        }
        else
        {
            j--;
            count++;
        }
    }

    if (n % 2 != 0)
        count++;
    cout << count << endl;
}