#include <iostream>
using namespace std;
  
int fun(int n)
{
    cout<<n<<" ";
    if (n > 5)
        return n - 1;
  
    // A recursive function passing parameter
    // as a recursive call or recursion inside 
    // the recursion
    return fun(fun(n + 11));
}
  
// Driver code
int main()
{
    int r;
    r = fun(1);
    
    cout << " " << r;
    
    return 0;
}