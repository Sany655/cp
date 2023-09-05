#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, c = 0;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        if (x[0] == '+' || x[x.size()-1] == '+')
            c++;
        else
            c--;
    }

    cout << c << endl;
    return 0;
}
