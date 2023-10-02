#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    bool prime = true;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
        cout << "NO" << endl;
    else
    {
        if (x % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}