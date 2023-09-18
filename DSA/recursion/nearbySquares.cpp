#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int> A;
        while (n--)
        {
            int x;
            cin>>x;
            A.push_back(x);
        }
        sort(A.begin(),A.end());
        cout<<"Hello"<<endl;
    }
    return 0;
}