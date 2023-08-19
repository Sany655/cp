#include <bits/stdc++.h>
using namespace std;

bool vowwel(char x)
{
    switch (x)
    {
    case 'a':
        return true;
    case 'e':
        return true;
    case 'i':
        return true;
    case 'o':
        return true;
    case 'u':
        return true;
    case 'y':
        return true;
    case 'A':
        return true;
    case 'E':
        return true;
    case 'I':
        return true;
    case 'O':
        return true;
    case 'U':
        return true;
    case 'Y':
        return true;
    default:
        return false;
    }
}

int main()
{
    string s, n = "";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (!vowwel(s[i]))
        {
            n.append(".");
            n+=s[i];
        }
    }
    transform(n.begin(),n.end(),n.begin(),::tolower);
    cout << n << endl;
}