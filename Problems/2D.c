#include <stdio.h>

int prime(int a)
{
    int b = 1;
    for (int i = 2; i < 250; i++)
    {
        if (i != a && a % i == 0)
        {
            b = 0;
            break;
        }
    }
    return b;
}
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int b;
        scanf("%d", &b);
        long long isp = prime(b);
        if (isp)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }

    return 0;
}