#include <iostream>
using namespace std;

struct node
{
    node *next;
    node *prev;
    int data;
};
node *head = NULL;
node *tail = NULL;
node *evenPonter = NULL;

void push(int val)
{
    if (tail != NULL)
    {
        if (val % 2 == 0)
        {
            evenPonter = tail;
        }
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

int main()
{
    int num;
    cin >> num; // Reading input from STDIN
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        push(x);
    }

    node *cn = head;
    while (cn != NULL)
    {
        cout << cn->data << " ";
        cn = cn->next;
    }
}