#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    map<int,bool> numbers;
    for (int i = 1; i <= x; i++)
    {
        int y;
        cin >> y;
        numbers[y] = true;
    }

    int missing;
    for (int i = 1; i <= x; i++)
    {
        if(!numbers[i]) {
            missing = i;
            break;
        }
    }
    
    
    cout << missing << endl;
}