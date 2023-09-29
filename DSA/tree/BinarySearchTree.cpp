#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node *l;
    Node *r;
    Node *parent;
};

class BTree
{

public:
    Node *root = NULL;
    Node *createNewNode(int v)
    {
        Node *nn = new Node();
        nn->value = v;
        nn->l = NULL;
        nn->r = NULL;
        nn->parent = NULL;
        return nn;
    }

    void bst_push(int v)
    {
        Node *nn = createNewNode(v);
        if (root == NULL)
        {
            root = nn;
        }
        else
        {
            Node *cn = root;
            Node *pn;
            while (cn != NULL)
            {
                pn = cn;
                if (cn->value == v)
                    return;
                if (cn->value < v)
                    cn = cn->r;
                else
                    cn = cn->l;
            }

            nn->parent = pn;
            if (pn->value < v)
            {
                pn->r = nn;
            }
            else
            {
                pn->l = nn;
            }
        }
    }

    void preOrder(Node *n)
    {
        if (n == NULL)
            return;
        cout << n->value << " ";
        preOrder(n->l);
        preOrder(n->r);
    }

    void inOrder(Node *n)
    {
        if (n == NULL)
            return;
        inOrder(n->l);
        cout << n->value << " ";
        inOrder(n->r);
    }

    void postOrder(Node *n)
    {
        if (n == NULL)
            return;
        postOrder(n->l);
        postOrder(n->r);
        cout << n->value << " ";
    }

    void search_iterative(int v)
    {
        int i = 0;
        Node *cn = root;
        if (cn != NULL)
        {
            while (cn != NULL)
            {
                if (cn->value < v)
                    cn = cn->r;
                else if (cn->value > v)
                    cn = cn->l;
                else if (cn->value == v)
                {
                    cout << "Fount At level " << i;
                    return;
                }
                i++;
            }
        }
        cout << "Not Found";
    }

    bool search_recursive(int v, Node *cn)
    {
        if (cn == NULL)
            return false;
        else if (v > cn->value)
            search_recursive(v, cn->r);
        else if (v < cn->value)
            search_recursive(v, cn->l);
        else
            return true;
    }

    void delete_iterative(int v)
    {
        Node *cn = root;
        Node *dn,*rn;
        while (cn != NULL)
        {
            if (cn->value < v)
                cn = cn->r;
            else if (cn->value > v)
                cn = cn->l;
            else if (cn->value == v)
            {
                dn = cn;
                if(cn->l != NULL)
                    rn = cn->l;
                else rn = cn->r;
                while (cn!=NULL)
                {
                    
                }
                
            }
        }
    }
};

int main()
{
    BTree f;
    f.bst_push(100);
    f.bst_push(120);
    f.bst_push(130);
    f.bst_push(55);
    f.bst_push(130);
    f.bst_push(115);
    f.bst_push(90);
    f.bst_push(0);
    // cout << "pre order : ";
    // f.preOrder(f.root);
    cout << "\nin order : ";
    f.inOrder(f.root);
    // cout << "\npost order : ";
    // f.postOrder(f.root);
    // cout << "\nwhat do you want to search? ";
    // int x;
    // cin >> x;
    // bool found = f.search_recursive(x, f.root);
    // if (found == true)
    //     cout << "Yes";
    // else
    //     cout << "No";
    cout << "\nwhat do you want to delete? ";
    int x;
    cin >> x;
    f.delete_iterative(x);
    cout << "\nin order : ";
    f.inOrder(f.root);
}