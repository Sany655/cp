#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> nums;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(),nums.end());
    int count = 1;
    for (int i = 0; i < n-1; i++)
    {
        if(nums[i]!=nums[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    
}