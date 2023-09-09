#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int a=x/2,b=x/2+1;
        while (a)
        {
            /* code */
        }
        
        int tmp = x;
        x = min(x, y);
        y = max(tmp, y);
        while (y % x)
        {
            int tmp = x;
            x = y % x;
            y = tmp;
        }
    }
}