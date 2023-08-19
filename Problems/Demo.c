#include <stdio.h>
int main()
{
    int n, m, a = 0, b = 0;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int cu=0,cd=0,rr=1,rl=0,i=0,j=0,k=0;
    while (k<=n*m)
    {
        
        printf("%d ",arr[i][j]);
        k++;
    }
    

    return 0;
}