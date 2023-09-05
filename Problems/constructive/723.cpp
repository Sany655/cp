#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int x;
    cin >> x;
    arr.push_back(x);
    cin >> x;
    arr.push_back(x);
    cin >> x;
    arr.push_back(x);

    sort(arr.begin(), arr.end());

    int d = 0;

    for (int i = arr.size() - 1; i > 0; i--)
    {
        d += arr[i] - arr[i - 1];
    }

    cout << d << endl;
    return 0;
}

// 1 4 100
// output 99