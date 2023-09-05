#include <bits/stdc++.h>
using namespace std;

int min(int a,int b){
    if(a>b) return b;
    else return a;
}

int max(int a,int b){
    if(a<b) return b;
    else return a;
}

int main(){
    int x,y;
    cin>>x>>y;
    int tmp = x;
    x = min(x,y);
    y = max(tmp,y);
    while (y%x)
    {
        int tmp = x;
        x = y%x;
        y = tmp;
    }
    cout<<x<<endl;
} // log(n)