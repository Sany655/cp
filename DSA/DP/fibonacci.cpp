#include <bits/stdc++.h>
using namespace std;
long long int counting = 0;

long long int orderOfN(int l)
{
    long long int i = 0, j = 1, k = 0;
    while (l--)
    {
        k = j;
        j = i;
        i += k;
        counting++;
    }
    return i;
}

int orderOfNSquare(int l)
{
    counting++;
    if (l <= 1)
        return l;
    return orderOfNSquare(l - 1) + orderOfNSquare(l - 2);
}

vector<long long int> dp;
long long int orderOfNUsingDP(long long int l)
{
    counting+=1;
    if (l <= 1)
        return l;
    if (dp[l] != -1)
        return dp[l];
    dp[l] = orderOfNUsingDP(l - 1) + orderOfNUsingDP(l - 2);
    return dp[l];
}

int main()
{
    dp.assign(30, -1);
    // long long int x = orderOfN(10);
    // long long int x = orderOfNSquare(10);
    long long int x = orderOfNUsingDP(10);
    cout << x << endl;
    cout << counting;
}