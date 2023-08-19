#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long result = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        result += x;
    }
    cout << abs(result) << "\n";
}