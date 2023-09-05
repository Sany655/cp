#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 0;
    long long n, armstrong = 0;
    cin >> n;
    armstrong = n;
    while (armstrong / 10)
    {
        armstrong = armstrong / 10;
        i++;
    }
    long long nn = n;
    armstrong = 0;
    while (nn % 10)
    {
        long long mul = 1;
        int digit = nn % 10;
        for (int j = 0; j <= i; j++)
        {
            mul *= digit;
        }
        cout<<mul<<endl;
        armstrong += mul;
        nn = nn / 10;
    }

    // if(armstrong == n) return true;
    // else return false;

    cout<< armstrong<< " " << n;
}