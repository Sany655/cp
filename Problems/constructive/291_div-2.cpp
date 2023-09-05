#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    cin >> t;
    for (int i = 0; i < t.size(); i++)
    {
        int d = t[i]-'0';
        if(i==0 && d == 9) continue;
        if(9-d<d) t[i] = 9-d+'0';
    }
    
    cout << t << endl;
    return 0;
}
