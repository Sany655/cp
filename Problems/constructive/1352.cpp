#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string x;
        cin>>x;
        int count = 0;
        for (int i = 0; i < x.size(); i++)
        {
            int d = x[i]-'0';
            if(d!=0) count++;
        }
        cout<<count<<endl;
        int multiplier = 1;
        for (int i = x.size()-1; i >= 0; i--)
        {
            int d = x[i]-'0';
            if(d!=0)
                cout<<d*multiplier<<" ";
            multiplier*=10;
        }
        cout<<endl;
    }
    
    return 0;
} // O(t*2x) = O(n^2)