#include <bits/stdc++.h>

using namespace std;

int main()
{
    // test cases
    int t;
    cin >> t;
    while (t--) // O(t)
    {
        // O(6t)
        int n; // length of  array a
        cin >> n;
        int a[n], leftSum = 0, rightSum = 0;
        bool flag = false;          // to check the ability of coloring array
        for (int i = 0; i < n; i++) // O(t*5n)
            cin >> a[i];
        for (int i = 0; i < n; i++) // O(t*7n)
        {
            // O(2)
            leftSum = 0;
            rightSum = 0;
            for (int j = 0; j < n; j++) // O(t*7n*8n)
            {
                leftSum += j <= i ? a[j] : 0;
                rightSum += j > i ? a[j] : 0;
            }
            if ((leftSum % 2) == (rightSum % 2)) // O(5t)
            {
                flag = true;
                break;
            }
        }
        if (flag) // O(3t)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

// O(9t+(t*5n)+(t*7n*8n)) = O(t*n^2)