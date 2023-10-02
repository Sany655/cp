#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a < 2 || a > 3)
    {
        for (int i = 2; i <= a; i += 2)
        {
            cout << i << " ";
        }
        for (int i = 1; i <= a; i += 2)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "NO SOLUTION";
    }
}