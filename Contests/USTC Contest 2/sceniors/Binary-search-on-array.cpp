#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    bool f = false;
    while (a--)
    {
        int z;
        cin>>z;
        if(z==b){
            f=true;
        }
    }
    
    if (f)
    {
        cout<<"true\n";
    }else{
        cout<<"false\n";
    }
    
}