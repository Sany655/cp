#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) // O(n)
    {
        // O(a)
        int n, prevWords = 0, preQuality = 0, winner = 1, words = 0, quality = 0;
        cin >> n;
        cin >> prevWords >> preQuality;
        if (prevWords > 10)
        {
            prevWords = 0;
            preQuality = 0;
        }
        // O(an)
        for (int j = 1; j < n; j++)
        {
            cin >> words >> quality;
            if (words <= 10 && preQuality < quality)
            {
                prevWords = words;
                preQuality = quality;
                winner = j + 1;
            }
        }
        // O(a)
        cout << winner << "\n";
    }
}

// O(n*O(a)+O(an)+O(a)) = O(n*O(n)) = O(n^2)