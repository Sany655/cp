#include <iostream>

using namespace std;

void sq(int x)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}
void rq(int x, int y)
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void lup(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void rup(int x)
{
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1, k = x - i; j <= x; j++)
        {
            if (j > k)
                cout << " *";
            else
                cout << "  ";
        }
        cout << "\n";
    }
}

void up(int x)
{
    for (int i = x, k = x - 1; i <= (x * 2) - 1; i++, k--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j > k)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
}

void dp(int x)
{
    for (int i = (x * 2) - 1, k = 0; i >= x; i--, k++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j >= k)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
}

void udp(int x)
{
    for (int i = x, k = x - 1; i <= (x * 2) - 1; i++, k--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j > k)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
    for (int i = (x * 2) - 1, k = 0; i > x; i--, k++)
    {
        for (int j = 0; j < i-1; j++)
        {
            if (j > k)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << "\n";
    }
}

int main()
{
    udp(11);
    return 0;
}