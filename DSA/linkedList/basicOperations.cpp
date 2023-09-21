#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
};

class List
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int val)
    {
        if (tail != NULL)
        {
            Node *nn = new Node();
            nn->data = val;
            nn->next = NULL;
            nn->prev = tail;
            tail->next = nn;
            tail = tail->next;
        }
        else
        {
            head = new Node();
            head->data = val;
            head->next = NULL;
            head->prev = NULL;
            tail = head;
        }
    }

    void pop()
    {
        Node *tmp = tail;
        tail = tail->prev;
        delete (tmp);
    }

    void append(int val)
    {
        if (head != NULL)
        {
            Node *nn = new Node();
            nn->data = val;
            nn->next = head;
            nn->prev = NULL;
            head = nn;
        }
        else
        {
            head = new Node();
            head->data = val;
            head->next = NULL;
            head->prev = NULL;
            tail = head;
        }
    }

    void shift()
    {
        Node *tmp = head;
        head = head->next;
        delete (tmp);
    }

    void traverse()
    {
        Node *trav = head;
        while (trav != NULL)
        {
            cout << trav->data << " ";
            trav = trav->next;
        }
    }

    void traverseReverse()
    {
        Node *trav = tail;
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
            Node *tmp = head;
            head = head->next;
            delete (tmp);
        }
    }

    void insert(int x, int n)
    {
        Node *cn = head;
        Node *nn = new Node();
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
                    cout << "Out of bound!";
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
};

int main()
{
    List list = List();
    for (int i = 0; i < 5; i++)
    {
        list.push(i);
    }
    list.traverse();
}