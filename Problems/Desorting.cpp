#include <iostream>
using namespace std;

// O(7n)
bool notSorted(int arr[], int x)
{
    for (int i = 0; i < x - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            return true;
    }
    return false;
}

void main()
{
    int t;
    cin >> t; // up to 100
    while (t--) // O(n) & n => 100
    {
        // 5
        int x, minimumDiffInd = 0;
        long long minimumDiff = 0;
        cin >> x; // 500 or 5*10^2
        int arr[x];
        // O(18n) & n => 500
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i]; // 10^9
            if (i != 0)
            {
                if (i == 1)
                    minimumDiff = arr[i] - arr[i - 1];
                else if (i != 0 && (arr[i] - arr[i - 1]) <= minimumDiff)
                {
                    minimumDiff = arr[i] - arr[i - 1];
                    minimumDiffInd = i - 1;
                }
            }
        }
        // 11
        int operations = 0;
        if (!notSorted(arr, x))
        {
            if (minimumDiff % 2 == 0)
                minimumDiff += 2;
            else
                minimumDiff += 1;
            operations = (minimumDiff / 2);
        }

        cout << operations << "\n";
    }
} // (5 + 18n + 1 + 7n + 11) * O(n) = O(n)*O(n) = O(n^2) because of the known value of t the overall complexity is O(n)