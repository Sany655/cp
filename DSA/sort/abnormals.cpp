#include <bits/stdc++.h>
#define f(i, v, c) for (int i = v; i < c; i++)
#define v vector<int>
using namespace std;

void reversort(v arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }
        reverse(arr.begin() + i, arr.begin() + min + 1);
    }
    f(i, 0, arr.size())
            cout
        << arr[i] << " ";
}


int main()
{

}