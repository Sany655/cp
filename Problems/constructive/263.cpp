#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r,c,m;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int tmp;
            cin>>tmp;
            if(tmp) {
                r=i;
                c=j;
            }
        }
    }
    
    m = r<=2?2-r:r-2;
    m += c<=2?2-c:c-2;
    
    cout<<m<<endl;
    return 0;
}
