#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n][n], arr2[n][n], ans[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ans[i][j] = 0;
            
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[k][i] += arr1[k][j] * arr2[j][i];
            }
            printf("%d ", ans[k][i]);
        }
            printf("\n");
    }

    return 0;
}