#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,index = -1;
    long long k;
    cin>>n>>k;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin>>x;
        if(x==k) index = i;
    }
    cout<<index<<endl;
}