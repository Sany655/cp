#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, i;
    cin >> x;
    for (i = 0; x > 0; i++)
    {
        x = x >= 5 ? x - 5 : x >= 4 ? x - 4
                         : x >= 3   ? x - 3
                         : x >= 2   ? x - 2
                                    : x >= 1 && x - 1;
    }
    cout << i << endl;
}