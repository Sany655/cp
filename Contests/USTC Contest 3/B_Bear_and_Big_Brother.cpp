#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, i;
    cin >> x >> y;
    for (i = 0; x <= y; i++)
    {
        x *= 3;
        y *= 2;
    }
    cout << i << endl;
}