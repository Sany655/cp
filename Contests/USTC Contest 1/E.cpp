#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0;
    cin >> n;
    for (int i = 0; i < n - 1; i++)
    {
        long long el;
        cin >> el;
        sum += el;
    }
    cout<<((n*(n+1))/2)-sum<<endl;
}