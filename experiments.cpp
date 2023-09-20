#include <bits/stdc++.h>
using namespace std;


int gcd(int x, int y)
{
    while (y % x)
    {
        int tmp = x;
        x = y % x;
        y = tmp;
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, i, j;
        cin >> l >> r;
        bool flag = false;
        for (i = l; i < r; i++)
        {
            for (j = i + 1; j < r; j++)
            {
                int lcm = (i * j) / gcd(i, j);
                if (lcm >= l && lcm <= r)
                {
                    flag = true;
                }
            }
            if(flag) break;
        }
        cout<<i<<" "<<j<<endl;
    }
} // log(n)