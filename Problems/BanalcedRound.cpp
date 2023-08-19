#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 2 -> O(1)
    int t;
    cin >> t;
    // O(n)
    while (t--)
    {
        // 5 -> O(1)
        int x, y;
        cin >> x >> y;
        int arr[x];
        // O(n)
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        // O(n^2)
        sort(arr, arr + sizeof(arr) / sizeof(arr[0]));
        // 2 -> O(1)
        int countSerials = 1, prevCounts = 0;
        // O(11n)
        for (int i = 0; i < x - 1; i++)
        {
            if (arr[i + 1] - arr[i] > y)
            {
                countSerials = 1;
            }
            else
            {
                countSerials++;
            }
            if (prevCounts <= countSerials)
            {
                prevCounts = countSerials;
            }
        }
        // 4 -> O(1)
        if (x == 1)
        {
            prevCounts = 1;
        }
        cout << x - prevCounts << "\n";
    }
}
/*
 2 + O(n * (11 + O(n) + O(n^2) + O(11n))) = O(n^3)
 if the test case t is known like upto 100 of 1000 then the overall time complexity is O(n^2)
*/