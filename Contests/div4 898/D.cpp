#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, x;
        cin >> n >> x;
        vector<long long int> coral;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            coral.push_back(x);
        }
        sort(coral.begin(), coral.end());
        for (auto i : coral)
        {
            cout << i << " ";
        }
        cout << endl;
        

        int l=0,r=1,h=coral[0],multiple=1;
        while (r<coral.size())
        {
            if(l==r){
                l++;
                r++;
                h++;
                multiple++;
                continue;
            }else{

            }
        }
        
    }
}