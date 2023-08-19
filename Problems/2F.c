#include <stdio.h>
#define m 100000000
long long pows(long long a)
{
    return a * a;
}

int main()
{
    long long a, b, c=0;
    scanf("%lld %lld", &a, &b);
    for (int i = 2; i <= b; i += 2)
    {
        if (c == 0)
            c += pows(a);
        else
            c += pows(c);
    }
    printf("%lld", c);
    return 0;
}