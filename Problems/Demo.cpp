#include <iostream>
using namespace std;
int main()
{
    int t, x;
    cin >> t;
    int arr[t];
    x = t;
    while (x--)
        cin >> arr[x];
    for (int i = 0; i < t - 1; i++)
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            i = 0;
        }
    x=t;
    // for(int i=0;i<t;i++) cout<<arr[i];
    int a=0,b=0,sum1=0,sum2=0;
    for (int i = x-1; i >= 0; i--)
    {
        for (int j = 0; j < t; j++)
        {
            if (j>=i)
            {
                b++;
                sum2+=arr[j];
            }else{
                a++;
                sum1+=arr[j];
            }
            
        }
        cout<<"sum1 = "<<sum1<<" a = "<<a<<"| sum2 = "<<sum2<<" b = "<<b<<endl;
        a=b=sum1=sum2=0;
    }
    
    return 0;
}
