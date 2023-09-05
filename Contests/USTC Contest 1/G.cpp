#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t = 5, start = 0, end = 0, startPoint = 0, endPoint = 0;
    bool flag = false, possibility = true;
    // cin >> t;
    // long long arr[t];
    vector<long long> arr = {69, 37, 27, 4, 2};
    // cout << "t=" << t << endl;
    for (int i = 0; i < t; i++)
    {
        long long el;
        cin >> el;
        arr.push_back(el);
    }

    for (int i = 0; i < t; i++)
    {   
        // cout<<"index : "<<i<<endl;
        // cout<<"Point is : "<<startPoint<<" after segment value : "<<arr[i]<<" possibility : "<<possibility<<"\n";
        if (startPoint > arr[i])
            possibility = false;
        if (i < t-1 && arr[i] > arr[i + 1])
        {
            if (flag)
            {
                possibility = false;
                break;
            }
            start = i;
            startPoint = arr[i];
            // cout << "start = " << start+1 << endl;
            while (arr[i] > arr[i + 1] && i < t - 1)
            {
                i++;
                // if endlig gone to the last index then end has to below of i++.
                // cout<<"index : "<<i<<endl;
            }
            end = i;
            if (start!=0 && arr[start-1] > arr[i])
            {
                possibility = false;
            }
            
            // cout << "end = " << end+1 << endl;
            flag = true;
        }
    }

    if (possibility)
    {
        cout << "yes\n"
             << start + 1 << " " << end + 1 << endl;
    }
    else
    {
        cout << "no\n";
    }
}

// 5
// 69 37 27 4 2

// 2
// 58 4

// 2
// 1 2

// 4
// 3 1 2 4

// 4
// 2 1 3 4

// 3
// 3 2 1

// 4
// 1 4 2 3

// 6
// 19517752 43452931 112792556 68417469 779722934 921694415

// 5
// 2 5 4 3 1