#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    set<int>s;
    while (t--)
    {
        int n;
        cin >> n;

        s.clear();
        if(n>1){
            for(int i=0; i<n; i++)
        {
            int k;
            cin>>k;
            for(int j=0; j<k; j++)
            {
                int l;
                cin>>l;
                s.insert(l);
            }
        }
        cout<<s.size()-1<<"\n";
        }
        else{
            cout<<"0"<<"\n";
        }
    }
    return 0;
}