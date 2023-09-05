#include <bits/stdc++.h>
using namespace std;
int main(){
    int number,revarsed = 0;
    cin>>number;
    for (int i = number; i != 0; i=i/10)
    {
        revarsed = (revarsed*10)+(i%10);
    }
    if(number == revarsed) cout<<"ok";
    else cout<<"Not";
}