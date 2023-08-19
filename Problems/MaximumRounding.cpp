#include <bits/stdc++.h>

using namespace std;

int main()
{
    // test cases
    int t;
    cin >> t;
    while (t--) // O(t)
    {
        // O(6t)
        int x; // length of  array a
        cin >> x;
        for (int i = x,j=1; i > 1; i=i/10,j++)
        {
            int k=i%10,kM1=(i%100)/10;
            cout<<k<<" "<<kM1<<"\n";
            if(kM1>=5) k++;
            if(k==9) {
                k++;
            }        
        }
        
    }
}

// x[k]==9?x[k]++:x[k]?x[k-1]<9?x[k-1]++?x[k]=x[k-1];
// x[k-1]>=5 then kth digit x[k]++;
// x[k]<k?x[k]=0