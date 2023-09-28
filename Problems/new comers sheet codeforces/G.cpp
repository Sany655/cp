#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i]==',') cout<<" ";
            else if(int(s[i])<97) cout<<char(int(s[i])+32);
            else cout<<char(int(s[i])-32);
        }
        
    // }
}