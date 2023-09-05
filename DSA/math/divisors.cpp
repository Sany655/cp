#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    long long totalSum = 0;
    // cin >> n;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= sqrt(j); i++)
        {
            if (j % i == 0)
            {
                if (j / i == i)
                    totalSum += i;
                else
                {
                    totalSum += j / i;
                    totalSum += i;
                }
            }
            // cout<<"-------------------";
            // cout<<sum<<endl;
            // totalSum += sum;
        }
    }

    // cout << totalSum << endl;
    return totalSum;
}