#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool isPrime = true;
    for (int i = 2; i < sqrt(n); i++) // if loop through n then it will be O(n)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
