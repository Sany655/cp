#include <bits/stdc++.h>
using namespace std;
int main(){
    char a;
    int b;
    cin>>a;
    b = a;
    if(b>=97 && b<=122) cout<< 0;
    else if(b<=90 && b >= 65) cout<< 1;
    else cout<< -1;
}