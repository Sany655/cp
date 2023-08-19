#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s;
    bool possible = true;
    cin >> s;
    long long arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    int start = 0, end = 0;
    for (int i = 0; i < s - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            start = i;
            for (int j = start + 1; j < s - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    end = j;
                    i = end + 1;
                    break;
                }
                if (j == s - 2){
                    end = j + 1;
                    i = end + 1;
                }
            }
            if (i < s && arr[i] > arr[i + 1])
            {
                possible = false;
                break;
            }
        }
    }

    if (possible)
    {
        cout << "yes\n"
             << start + 1 << " " << end + 1;
    }
    else
    {
        cout << "no\n";
    }
}