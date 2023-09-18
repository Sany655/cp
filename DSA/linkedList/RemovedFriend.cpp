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
    Node *head;
    Node *tail;
    int size;
    List()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }

    Node *createNewNode(int val)
    {
        Node *nn = new Node();
        nn->data = val;
        nn->next = NULL;
        nn->prev = NULL;
        return nn;
    }

    void push(int val)
    {
        if (tail != NULL)
        {
            Node *nn = createNewNode(val);
            nn->prev = tail;
            tail->next = nn;
            tail = tail->next;
        }
        else
        {
            head = createNewNode(val);
            tail = head;
        }
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

    void removeFriend(int k)
    {
        // cout << "dhukse with " << k << endl;
        Node *cn = head;
        // cout << "head = " << head->data << endl;
        for (int i = 1; i <= k;)
        {
            if (cn == tail)
            {
                cn = head;
            }

            // cout << "loop e dhukse" << endl;
            if (cn->data < cn->next->data)
            {
                i++;
                // cout << cn->data << " choto " << cn->next->data << " theke " << endl;
                if (cn == head)
                {
                    // cout << "if e dhukse" << endl;
                    head = head->next;
                    delete (cn);
                    cn = head;
                }
                else
                {
                    // cout << "else e dhukse" << endl;
                    Node *pv = cn->prev;
                    // cout << "prev node " << pv->data << endl;
                    Node *nx = cn->next;
                    pv->next = nx;
                    nx->prev = pv;
                    delete (cn);
                    cn = nx;
                }
            }
            else
            {
                cn = cn->next;
            }
        }
    }

    void pop()
    {
        Node *tmp = tail;
        tail = tail->prev;
        delete (tmp);
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        List li;
        int n, k;
        cin >> n >> k;
        int z = n;
        while (z--)
        {
            int x;
            cin >> x;
            // cout<<li.tail->data<<endl;
            // if (li.tail->data < x)
            // {
            //     li.pop();
            //     k--;
            // }
            li.push(x);
        }

        li.removeFriend(k);
        li.traverse();
        cout << endl;
    }

    // l1.removeFriend();
}