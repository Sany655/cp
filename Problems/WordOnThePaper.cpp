#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) // O(n)
    {
        string s, newS;
        for (int j = 0; j < 8; j++) // O(n * O(1))
        {
            char empty;
            cin >> s;
 
            for (int i = 0; i < s.length(); i++) // O(n O(1 * O(1 * O(1))))
            {
                if (s[i] != '.')
                {
                    newS += s[i];
                }
            }
        }
        // O(1)
        cout << newS;
        cout << "\n";
        newS = "";
        s = "";
    }
}

// O(n O(1 * O(1))) + O(1) = O(n)