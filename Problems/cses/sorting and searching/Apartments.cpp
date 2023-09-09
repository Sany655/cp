#include <bits/stdc++.h>
using namespace std;
void approach1();
void approach2();

int main()
{
    approach1();
}

void approach2()
{
    int n, m, count = 0;
    long long k;
    cin >> n >> m >> k;
    vector<long long> ds;
    vector<long long> as;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        ds.push_back(x);
    }
    sort(ds.begin(), ds.end());
    for (int i = 0; i < m; i++)
    {
        long long x;
        cin >> x;
        as.push_back(x);
    }
    sort(as.begin(), as.end());

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (ds[i] + k >= as[j] && ds[i] - k <= as[j])
        {
            i++;
            j++;
            count++;
        }
        else if (ds[i] + k < as[j])
        {
            i++;
        }
        else if (ds[i] + k > as[j])
        {
            j++;
        }
    }
    cout << count << endl;
}

void approach1()
{
    int n, m, count = 0;
    long long k;
    cin >> n >> m >> k;
    vector<long long> ds;
    vector<long long> as;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        ds.push_back(x);
    }
    sort(ds.begin(), ds.end());

    for (int i = 0; i < m; i++)
    {
        long long x;
        cin >> x;
        as.push_back(x);
    }
    sort(as.begin(), as.end());

    for (int i = 0, j = 0; i < n && j < m;)
    {
        long long a = ds[i];
        long long b = as[j];
        if (a + k < b)
        {
            i++;
        }
        else if (a - k > b)
        {
            j++;
        }
        else if (a + k >= b && a - k <= b)
        {
            i++;
            j++;
            count++;
        }
    }
    cout << count << endl;
}
