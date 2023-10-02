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

    bool delete_iterative(int v)
    {
        Node *cn = root;
        int i = 0;
        bool isD = false;
        while (cn != NULL)
        {
            i++;
            if (cn->value < v)
                cn = cn->r;
            else if (cn->value > v)
                cn = cn->l;
            else if (cn->value == v)
            {
                isD = true;
                Node *dn = cn;
                cout << "-- found " << cn->value << " at level " << i << endl;
                if (cn->l == NULL && cn->r != NULL)
                {
                    cout << "in first condition *\n";
                    if (root == cn)
                        root = cn->r;
                    else
                    {
                        cn->r->parent = cn->parent;
                        cn->parent->l = cn->r;
                    }
                    delete (dn);
                }
                else if (cn->l != NULL && cn->r == NULL)
                {
                    cout << "in second condition **\n";
                    if (root == cn)
                        root = cn->l;
                    else
                    {
                        cn->l->parent = cn->parent;
                        cn->parent->r = cn->l;
                    }
                    delete (dn);
                }
                else if (cn->l != NULL && cn->r != NULL)
                {
                    cout << "in third condition ***\n";
                    Node *successor = cn->r;
                    while (successor->l != NULL)
                        successor = successor->l;
                    cn->value = successor->value;
                    if (successor->parent != cn)
                        successor->parent->l = successor->r;
                    else
                        successor->parent->r = successor->l;
                    delete successor;
                }
                else
                {
                    cout << "at last condition ****\n";
                    if (cn->parent->r == cn)
                        cn->parent->r = NULL;
                    else
                        cn->parent->l = NULL;
                    delete (cn);
                }
                break;
            }
        }
        if (!isD)
            return false;
        else
            return true;
    }

    Node *delete_recursive(int v, Node *cn)
    {
        if (cn == NULL)
            return cn;
        if (cn->value > v)
        {
            cn->l = delete_recursive(v, cn->l);
            return cn;
        }
        else if (cn->value < v)
        {
            cn->r = delete_recursive(v, cn->r);
            return cn;
        }

        if (cn->l == NULL)
        {
            Node *tmp = cn->r;
            delete cn;
            return tmp;
        }
        else if (cn->r == NULL)
        {
            Node *tmp = cn->l;
            delete cn;
            return tmp;
        }
        else
        {
            Node *succParent = cn;
            Node *succ = cn->r;
            while (succ->l != NULL)
            {
                succParent = succ;
                succ = succ->l;
            }
            if (succParent != cn)
                succParent->l = succ->r;
            else
                succParent->r = succ->r;

            cn->value = succ->value;

            delete succ;
            return root;
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
    f.bst_push(118);
    f.bst_push(116);
    f.bst_push(105);
    f.bst_push(110);
    f.bst_push(119);
    f.bst_push(117);

    // cout << "pre order : ";
    // f.preOrder(f.root);

    // cout << "\nin order : ";
    // f.inOrder(f.root);

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

    /* test binary search tree delete a node*/
    // f.inOrder(f.root);
    // while (true)
    // {
    //     cout << "\nwhat do you want to delete? ";
    //     int x;
    //     cin >> x;
    //     if (!f.delete_iterative(x))
    //         break;
    //     f.inOrder(f.root);
    // }

    // for (int i = 1; i <= 10; i++)
    // {
    //     f.bst_push(i);
    // }
    // f.inOrder(f.root);
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << endl
    //          << i << "th times\n";
    //     f.delete_iterative(i);
    //     // Node *r = f.delete_recursive(i, f.root);
    //     f.inOrder(f.root);
    // }
}