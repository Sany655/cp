#include <bits/stdc++.h>
using namespace std;
int counting = 0;

bool orderOfrootN(int n)
{
    bool isPrime = true;
    for (int i = 2; i < sqrt(n); i++)
    {
        cout << n << "%" << i << "=" << n % i << endl;
        counting++;
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

bool orderOfN(int n)
{
    bool isPrime = true;
    for (int i = 2; i < n; i++)
    {
        counting++;
        cout << n << "%" << i << "=" << n % i << endl;
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

bool orderOfrootNbyTwo(int n)
{
    bool isPrime = true;
    for (int i = 2; i < sqrt(n/2); i++)
    {
        counting++;
        cout << n << "%" << i << "=" << n % i << endl;
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main()
{
    int n;
    cin >> n;
    // bool isPrime = orderOfrootNbyTwo(n);
    // bool isPrime = orderOfrootN(n);
    bool isPrime = orderOfN(n);
    if (isPrime)
        cout << "true" << endl;
    else
        cout << "false" << endl;
    cout << counting;
}
