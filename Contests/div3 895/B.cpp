#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int d[n],s[n],re=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>d[i]>>s[i];
        }
        for(int i=0;i<n;i++){
            if(s[i]>=3){
                if(s[i]%2==1){
                    re=min(re,d[i]+s[i]/2);
                }
                else{
                    re=min(re,d[i]+s[i]/2-1);
                }
                
            }
            else{
                    re=min(re ,d[i]);
                }       
                }
                cout<<re<<endl;
    }
}