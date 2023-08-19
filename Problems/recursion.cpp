#include <iostream>
using namespace std;

int factorial(int x){
    if (x==1) return x;
    return x*factorial(x-1);
}

int printing(int x){
    cout<<x<<"\n";
    if(x==1) return x;
    return printing(x-1);
}

int main()
{
    int x = printing(10);
    return 0;
}
