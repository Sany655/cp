#include <bits/stdc++.h>
using namespace std;

struct node
{
    node *prev;
    int data;
    node *next;
};
node *head = NULL;
node *tail = NULL;

void push(int val)
{
    if (tail != NULL)
    {
        node *nn = new node();
        nn->data = val;
        nn->next = NULL;
        nn->prev = tail;
        tail->next = nn;
        tail = tail->next;
    }
    else
    {
        head = new node();
        head->data = val;
        head->next = NULL;
        head->prev = NULL;
        tail = head;
    }
}

void insert(int x, int n)
{
    node *cn = head;
    node *nn = new node();
    nn->data = x;
    if (n > 1)
    {
        for (int i = 0; i < n - 2; i++)
        {
            if (cn->next != NULL)
            {
                cn = cn->next;
            }
            else
            {
                return;
            }
        }
        nn->next = cn->next;
        nn->prev = cn->prev;
        cn->next = nn;
        cn = cn->next;
    }
    else
    {
        nn->next = head;
        nn->prev = NULL;
        head = nn;
    }
}

void traverse()
{
    node *trav = head;
    while (trav != NULL)
    {
        cout << trav->data << " ";
        trav = trav->next;
    }
}

int main()
{
    int num, ep = 0;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        if (x % 2 != 0 || tail == NULL)
        {
            push(x);
            if (x % 2 == 0)
                ep = i;
        }
        else
        {
            if (tail->data % 2 != 0)
            {
                ep = i+1;
                push(x);
            }
            else
            {
                insert(x, ep);
            }
        }
    }

    traverse();
}