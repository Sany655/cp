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

void pop()
{
    node *tmp = tail;
    tail = tail->prev;
    delete(tmp);
}

void append(int val)
{
    if (head != NULL)
    {
        node *nn = new node();
        nn->data = val;
        nn->next = head;
        nn->prev = NULL;
        head = nn;
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

void shift()
{
    node *tmp = head;
    head = head->next;
    delete(tmp);
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

void traverseReverse()
{
    node *trav = tail;
    while (trav != NULL)
    {
        cout << trav->data << " ";
        trav = trav->prev;
    }
}

void delet()
{
    while (head->next != NULL)
    {
        node *tmp = head;
        head = head->next;
        delete (tmp);
    }
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        push(i);
    }
    traverse();
    cout<<'\n';
    traverseReverse();
    cout<<'\n';
    append(-1);
    traverse();
    cout<<'\n';
    pop();
    traverse();
    cout<<'\n';
    push(11);
    traverse();
    cout<<'\n';
    shift();
    traverseReverse();
    cout<<'\n';
    delet();
}